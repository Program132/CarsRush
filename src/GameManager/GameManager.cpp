#include "GameManager.h"

bool GameManager::vehiculeIsAvailableInGame(GameInfo& gameInfo, Vehicule& v) {
    if (v.getX() <= gameInfo.getX() &&  v.getY() <= gameInfo.getY()) {
        return true;
    }
    return false;
}

std::string GameManager::vehiculeIsAvailableInGame_toString(GameInfo& gameInfo, Vehicule& v) {
    if (v.getX() <= gameInfo.getX() &&  v.getY() <= gameInfo.getY()) {
        return "Yes";
    }
    return "No";
}

void GameManager::generateSpawnGame(GameInfo& gameInfo, Vehicule& v, EndGame& endGame) {
    /*
      x:0 1 2 3 4 5 6 7 8 9 -> 10 x | y
        - - - - - - - - - -           0
        - - - - - - - - - -           1
        - - - - - - - - - -           2
    */

    for (int i = 0; i < gameInfo.getY(); i++) { // to the length -> y
        for (int j = 0; j < gameInfo.getX(); j++) {
            if (i == v.getY() && j == v.getX()) {
                std::cout << "*";
            } else if (i == endGame.position.p_y && j == endGame.position.p_x) {
                std::cout << "A";
            } else {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

bool GameManager::isEndGame(EndGame &endGame, Vehicule &v) {
    if (endGame.position.p_x == v.getX() && endGame.position.p_y == v.getY()) {
        return true;
    }
    return false;
}

void GameManager::endGame() {
    std::cout << "The winner is: " + this->GameWinner << "!" << std::endl;
}
