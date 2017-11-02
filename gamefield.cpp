#include "gamefield.h"
#include<iostream>


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

GameField& GameField::getInstance()
{
    static GameField instance_;
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
    field_[barrier->getXPosition()][barrier->getYPosition()] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + ONE_STEP] = BARRIER_GRAPHICS;
    break;

    case TYPE_DOUBLE_BARRIER :
    field_[barrier->getXPosition()][barrier->getYPosition()] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + ONE_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + TWO_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + THREE_STEP] = BARRIER_GRAPHICS;
    break;

    case TYPE_LONG_BARRIER :
    field_[barrier->getXPosition()][barrier->getYPosition()] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + ONE_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + TWO_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + THREE_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + FOUR_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + FIVE_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + SIX_STEP] = BARRIER_GRAPHICS;
    field_[barrier->getXPosition()][barrier->getYPosition() + SEVEN_STEP] = BARRIER_GRAPHICS;
    break;

    }
}
