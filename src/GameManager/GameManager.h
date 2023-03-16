#ifndef CARSRUSH_GAMEMANAGER_H
#define CARSRUSH_GAMEMANAGER_H

#include <iostream>

#include "../GameInfo/GameInfo.h"
#include "../Vehicule/Vehicule.h"

class GameManager {
public:
    bool vehiculeIsAvailableInGame(GameInfo gameInfo, Vehicule v);
    std::string vehiculeIsAvailableInGame_toString(GameInfo gameInfo, Vehicule v);
};


#endif