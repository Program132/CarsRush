#ifndef CARSRUSH_VEHICULE_H
#define CARSRUSH_VEHICULE_H

#include <iostream>

#include "../Position/Position.h"

class Vehicule {
public:
    Vehicule();
    explicit Vehicule(std::string name);

    [[maybe_unused]] Vehicule(std::string name, Position position);
    Vehicule(std::string name, int x, int y);

    std::string name;
    Position position;

    std::string getName();
    void setName(std::string name);
    int getX();
    int getY();
    Position getPosition();
    void setX(int x);
    void setY(int y);
    void setPosition(Position pos);
    void setPosition(int x, int y);
    std::string toString();
};


#endif
