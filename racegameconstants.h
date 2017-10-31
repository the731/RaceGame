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
    const int MINIMUM_GAME_SPEED = 1000;
    const int MAXIMUM_GAME_SPEED = 10;
    const int SPEED_CHANGE_STEP = 10;

    const int WITHOUT_FANCE_BEGIN_INDEX = 1;
    const int WITHOUT_FANCE_END_INDEX = 18;

    //_______________ CONTROLLER ______________________
    const char INCREASE_SPEED = 'w';
    const char DECREASE_SPEED = 's';
    const char MOVE_CAR_LEFT = 'a';
    const char MOVE_CAR_RIGHT = 'd';
    const char SET_GAME_OVER = 'o';

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
