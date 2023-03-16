#include "GameInfo.h"

GameInfo::GameInfo() {
    this->x_length = 10;
    this->y_length = 3;
}

GameInfo::GameInfo(int x, int y) {
    this->x_length = x;
    this->y_length = y;
}

void GameInfo::updateLengths(int x, int y) {
    this->x_length = x;
    this->y_length = y;
}

void GameInfo::setX(int x) {
    this->x_length = x;
}

void GameInfo::setY(int y) {
    this->y_length = y;
}

int GameInfo::getX() {
    return this->x_length;
}

int GameInfo::getY() {
    return this->y_length ;
}


std::string GameInfo::toString() {
    return "(" + std::to_string(this->x_length) + ", " + std::to_string(this->y_length) + ")";
}
