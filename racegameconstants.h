#ifndef RACEGAMECONSTANTS_H
#define RACEGAMECONSTANTS_H

namespace RaceGameConstants
{
    //______________ GAME FIELD _______________________
    const int FIELD_WIDTH = 20;
    const int FIELD_LENGHT = 20;
    const int BEGIN_INDEX = 0;
    const int END_INDEX = 19;
    const int ONE_STEP = 1;
    const char NEXT_LINE = '\n';

    const char SIDE_FANCE = '*';
    const char EMPTY_POINT = ' ';
    const int DEFAULT_GAME_SPEED = 100;

    //_______________ REGULAR CAR _____________________
    const int TYPE_CAR = 100;
    const int CAR_DEFAULT_POSITION_X = 18;
    const int CAR_DEFAULT_POSITION_Y = 10;
    const char TYPE_CAR_GRAPHICS = '^';

    //_______________ REGULAR BARRIER _________________
    const int TYPE_REGULAR_BARRIER = 2;
    const int REGULAR_BARRIER_DEFAULT_POSITION_X = 0;
    const int REGULAR_BARRIER_DEFAULT_POSITION_Y = 10;
    const char REG_BARRIER_GRAPHICS = '=';
}
#endif // RACEGAMECONSTANTS_H
