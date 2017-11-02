#ifndef GAME_H
#define GAME_H

#include "gamefield.h"
#include "car.h"
#include "regularbarrier.h"
#include "barriercollection.h"

#include "racegameconstants.h"

using namespace RaceGameConstants;

class Game
{
public:
    Game();

    void start();
    void changeCarPosition();
    void changeBarrierPosition();

    ~Game();

private:

    bool isGameOver_;
    IGameItem* car_;
    IGameItem* barrier_;
    int gameSpeed_;
    BarrierCollection barrierCollection_;

    void clearScreen();
    void collapseCheck();
    void setBarrier(IGameItem *barrier);

};

#endif // GAME_H
