#include "gamefield.h"
#include<iostream>

GameField* GameField::instance_ = 0;

GameField::GameField()
{
    refreshField();
}

void GameField::refreshField()
{
    for(int i = BEGIN_INDEX; i < FIELD_LENGHT; i++)
    {
        for(int j = BEGIN_INDEX; j < FIELD_WIDTH; j++)
        {
            if(j == BEGIN_INDEX || j == END_INDEX)
            {
                field_[i][j] = SIDE_FANCE;
            }
            else
            {
                field_[i][j] = EMPTY_POINT;
            }
        }
    }
}

GameField* GameField::getInstance()
{
    if(!instance_)
        instance_ = new GameField();
    return instance_;
}

void GameField::draw()
{

    for(int i = BEGIN_INDEX; i < FIELD_LENGHT; i++)
    {
        for(int j = BEGIN_INDEX; j < FIELD_WIDTH; j++)
        {
            std::cout << field_[i][j];
        }
        std::cout << NEXT_LINE;
    }
}

void GameField::setCarPosition(const IGameItem* car)
{
    switch (car->getType())
    {
    case TYPE_CAR :
    field_[car->getXPosition()][car->getYPosition()] = TYPE_CAR_GRAPHICS;
    break;

    //TODO: implement different types of car
    }
}

void GameField::setBarrierPosition(const IGameItem* barrier)
{
    switch (barrier->getType())
    {
    case TYPE_REGULAR_BARRIER :
    field_[barrier->getXPosition()][barrier->getYPosition()] = REG_BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + ONE_STEP] = REG_BARRIER_GRAPHICS;
    break;

    //TODO: implement different types of barrier
    }
}
