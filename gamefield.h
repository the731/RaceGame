#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include"racegameconstants.h"
#include"igameitem.h"

using namespace RaceGameConstants;

class GameField
{
public:
    static GameField& getInstance();

    void draw();
    void setCarPosition(const IGameItem* car);
    void setBarrierPosition(const IGameItem* barrier);
    void refreshField();



private:

    GameField();
    GameField( const GameField& );
    GameField& operator=( GameField& );

    char field_[FIELD_LENGHT][FIELD_WIDTH];
};

#endif // GAMEFIELD_H
