#include "car.h"


Car::Car():
    xPosition_(CAR_DEFAULT_POSITION_X)
   ,yPosition_(CAR_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_CAR)
{

}

int Car::getXPosition() const
{
    return xPosition_;
}

void Car::setPosition(int x, int y)
{
    xPosition_ = x;
    yPosition_ = y;
}

void Car::setType(int type)
{
    itemType_ = type;
}

int Car::getYPosition() const
{
    return yPosition_;
}

int Car::getType() const
{
    return itemType_;
}

Car::~Car()
{

}

