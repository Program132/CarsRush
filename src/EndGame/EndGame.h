#ifndef CARSRUSH_ENDGAME_H
#define CARSRUSH_ENDGAME_H

#include "../Position/Position.h"
#include "../GameInfo/GameInfo.h"

class EndGame {
public:
    EndGame();
    explicit EndGame(GameInfo info);

    Position position;
};


#endif
