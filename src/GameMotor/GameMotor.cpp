#include "GameMotor.h"

GameMotor::GameMotor() {
    this->x_length = 10;
    this->y_length = 3;
}

GameMotor::GameMotor(int x, int y) {
    this->x_length = x;
    this->y_length = y;
}

void GameMotor::updateLengths(int x, int y) {
    this->x_length = x;
    this->y_length = y;
}

std::string GameMotor::toString() {
    return "(" + std::to_string(this->x_length) + ", " + std::to_string(this->y_length) + ")";
}
