#include <iostream>

#include "src/GameInfo/GameInfo.h"
#include "src/Vehicule/Vehicule.h"
#include "src/EndGame/EndGame.h"
#include "src/GameManager/GameManager.h"
#include "src/Move/Move.h"

int main() {
    int size_x;
    int size_y;

    std::cout << "How many column do you want: ";
    std::cin >> size_x;
    std::cout << "\n";
    std::cout << "How many line do you want: ";
    std::cin >> size_y;
    std::cout << "\n";

    std::string v_name;
    std::cout << "Name of your car: ";
    std::cin >> v_name;

    GameInfo gameInfo(size_x, size_y);
    Vehicule vehicule(v_name, 2, size_y/2);
    Move move;
    EndGame endGame(gameInfo);

    std::cout << vehicule.toString() << std::endl;

    GameManager gameManager;
    std::cout << gameManager.vehiculeIsAvailableInGame_toString(gameInfo, vehicule) << std::endl;

    if (gameManager.vehiculeIsAvailableInGame(gameInfo, vehicule)) {
        GameInfo::sendContentGame();

        while(!gameManager.GameOver) {
            gameManager.generateSpawnGame(gameInfo, vehicule, endGame);
            move.askAction();
            move.toDown(gameManager, vehicule, gameInfo);
            move.toUp(gameManager, vehicule, gameInfo);
            move.toLeft(gameManager, vehicule, gameInfo);
            move.toRight(gameManager, vehicule, gameInfo);
            if (gameManager.isEndGame(endGame, vehicule)) {
                gameManager.GameOver = true;
                gameManager.GameWinner = vehicule.name;
            }

            for (int i = 0; i < 10; i++) {
                std::cout << "\n";
            }
            std::cout << std::endl;
        }
        gameManager.generateSpawnGame(gameInfo, vehicule, endGame);
        gameManager.endGame();
    }

    return 0;
}