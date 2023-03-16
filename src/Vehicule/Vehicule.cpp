#include "Vehicule.h"

Vehicule::Vehicule() {}

Vehicule::Vehicule(std::string name) {
    this->name = name;
    this->position = Position(0,0);
}

Vehicule::Vehicule(std::string name, Position position) {
    this->name = name;
    this->position = position;
}

Vehicule::Vehicule(std::string name, int x, int y) {
    this->name = name;
    this->position = Position(x, y);
}

std::string Vehicule::getName() {
    return this->name;
}

void Vehicule::setName(std::string name) {
    this->name = name;
}

int Vehicule::getX() {
    return this->position.p_x;
}

int Vehicule::getY() {
    return this->position.p_y;
}

Position Vehicule::getPosition() {
    return this->position;
}

void Vehicule::setX(int x) {
    this->position.p_x = x;
}

void Vehicule::setY(int y) {
    this->position.p_y = y;
}

void Vehicule::setPosition(Position pos) {
    this->position = pos;
}

void Vehicule::setPosition(int x, int y) {
    this->position = Position(x, y);
}

std::string Vehicule::toString() {
    return "(Name: " + this->name + ", " + "position: " + this->position.toString() + ")";
}