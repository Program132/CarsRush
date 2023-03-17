#ifndef CARSRUSH_MOVE_H
#define CARSRUSH_MOVE_H

#include <iostream>
#include "../GameManager/GameManager.h"
#include "../Vehicule/Vehicule.h"
#include "../GameInfo/GameInfo.h"

class Move {
public:
    std::string selection;

    void toLeft(GameManager& gameManager, Vehicule& vehicule, GameInfo& info);
    void toRight(GameManager& gameManager, Vehicule& vehicule, GameInfo& info);
    void toUp(GameManager& gameManager, Vehicule& vehicule, GameInfo& info);
    void toDown(GameManager& gameManager, Vehicule& vehicule, GameInfo& info);
    void askAction();
};


#endif
