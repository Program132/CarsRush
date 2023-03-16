#ifndef CARSRUSH_GAMEMOTOR_H
#define CARSRUSH_GAMEMOTOR_H

#include <iostream>

class GameMotor {
public:
    GameMotor();
    GameMotor(int x, int y);

    int x_length;
    int y_length;

    void updateLengths(int x, int y);
    std::string toString();
};

#endif