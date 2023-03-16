#include "GameManager.h"

bool GameManager::vehiculeIsAvailableInGame(GameInfo gameInfo, Vehicule v) {
    if (v.getX() <= gameInfo.getX() &&  v.getY() <= gameInfo.getY()) {
        return true;
    }
    return false;
}

std::string GameManager::vehiculeIsAvailableInGame_toString(GameInfo gameInfo, Vehicule v) {
    if (v.getX() <= gameInfo.getX() &&  v.getY() <= gameInfo.getY()) {
        return "Yes";
    }
    return "No";
}