#ifndef CARSRUSH_GAMEINFO_H
#define CARSRUSH_GAMEINFO_H

#include <iostream>

class GameInfo {
public:
    GameInfo();
    GameInfo(int x, int y);

    int x_length;
    int y_length;

    // Classic Methods:

    void updateLengths(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX() const;
    int getY() const;
    std::string toString();

    // Game Information to Player Methods:

    static void sendContentGame();
};

#endif