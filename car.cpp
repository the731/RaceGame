#include "car.h"


Car::Car():
    xPosition(CAR_DEFAULT_POSITION_X)
   ,yPosition(CAR_DEFAULT_POSITION_Y)
   ,itemType(TYPE_CAR)
{

}

int Car::getXPosition() const
{
    return xPosition;
}

void Car::setPosition(int x, int y)
{
    xPosition = x;
    yPosition = y;
}

void Car::setType(int type)
{
    itemType = type;
}

int Car::getYPosition() const
{
    return yPosition;
}

int Car::getType() const
{
    return itemType;
}

Car::~Car()
{

}

