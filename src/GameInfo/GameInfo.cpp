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

int GameInfo::getX() const {
    return this->x_length;
}

int GameInfo::getY() const {
    return this->y_length ;
}


std::string GameInfo::toString() {
    return "(" + std::to_string(this->x_length) + ", " + std::to_string(this->y_length) + ")";
}

void GameInfo::sendContentGame() {
    std::cout << "Hello, welcome to CarsRush ! This video game is made by Program, it's a test game.";
    std::cout << "You have to know some informations, your cars is '*', to win you have to go to 'A' in the 'map' displayed on your terminal.";
    std::cout << "You have to move with: 'W' to 'UP', 'S' to 'DOWN', 'Q' to move to your left, 'D' to move to your right.";
    std::cout << std::endl;
}
