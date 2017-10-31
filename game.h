#ifndef GAME_H
#define GAME_H

#include "gamefield.h"
#include "car.h"
#include "regularbarrier.h"

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

    bool isGameOver;
    IGameItem* car;
    IGameItem* barrier;

    void clearScreen();

};

#endif // GAME_H
