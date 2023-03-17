#include "Move.h"

void Move::askAction() {
    bool action = false;
    while (!action) {
        std::string possibleAction;
        std::cout << "Action: ";
        std::cin >> possibleAction;
        std::cout << std::endl;

        if (!possibleAction.empty()) {
            if (possibleAction == "W") {
                this->selection = "W";
                action = true;
            } else if (possibleAction == "S") {
                this->selection = "S";
                action = true;
            } else if (possibleAction == "Q") {
                this->selection = "Q";
                action = true;
            } else if (possibleAction == "D") {
                this->selection = "D";
                action = true;
            }
        }
    }
}

void Move::toLeft(GameManager& gameManager, Vehicule& vehicule, GameInfo& info) {
    if (this->selection == "Q") {
        if (vehicule.getX()-1 >= 0) {
            vehicule.setX(vehicule.getX()-1);
        }
    }
}

void Move::toRight(GameManager& gameManager, Vehicule& vehicule, GameInfo& info) {
    if (this->selection == "D") {
        if (vehicule.getX()+1 < info.getX()) {
            vehicule.setX(vehicule.getX()+1);
        }
    }
}

void Move::toUp(GameManager& gameManager, Vehicule& vehicule, GameInfo& info) {
    if (this->selection == "W") {
        if (vehicule.getY()-1 >= 0) {
            vehicule.setY(vehicule.getY()-1);
        }
    }
}

void Move::toDown(GameManager& gameManager, Vehicule& vehicule, GameInfo& info) {
    if (this->selection == "S") {
        if (vehicule.getY()+1 < info.getY()) {
            vehicule.setY(vehicule.getY()+1);
        }
    }
}