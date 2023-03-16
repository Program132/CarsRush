#include "Position.h"

Position::Position() {}

Position::Position(int x, int y) {
    this->p_x = x;
    this->p_y = y;
}

std::string Position::toString() {
    return "(" + std::to_string(this->p_x) + ", " + std::to_string(this->p_y) + ")";
}
