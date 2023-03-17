#ifndef CARSRUSH_GAMEMANAGER_H
#define CARSRUSH_GAMEMANAGER_H

#include <iostream>

#include "../GameInfo/GameInfo.h"
#include "../Vehicule/Vehicule.h"
#include "../EndGame/EndGame.h"

class GameManager {
public:
    bool GameOver;
    std::string GameWinner;

    bool vehiculeIsAvailableInGame(GameInfo& gameInfo, Vehicule& v);
    std::string vehiculeIsAvailableInGame_toString(GameInfo& gameInfo, Vehicule& v);
    void generateSpawnGame(GameInfo& gameInfo, Vehicule& v, EndGame& endGame);
    bool isEndGame(EndGame& endGame, Vehicule& v);
    void endGame();
};


#endif