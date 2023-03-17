#include "EndGame.h"

EndGame::EndGame() {
    this->position = Position(0,0);
}

EndGame::EndGame(GameInfo info) {
    this->position = Position(info.getX()-2, (info.getY()+1)/3);
}
