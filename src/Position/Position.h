#ifndef CARSRUSH_POSITION_H
#define CARSRUSH_POSITION_H

#include <iostream>

class Position {
public:
    Position();
    Position(int x, int y);

    int p_x;
    int p_y;

    std::string toString();
};


#endif