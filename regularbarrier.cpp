#include "regularbarrier.h"

RegularBarrier::RegularBarrier():
    xPosition(REGULAR_BARRIER_DEFAULT_POSITION_X)
   ,yPosition(REGULAR_BARRIER_DEFAULT_POSITION_Y)
   ,itemType(TYPE_REGULAR_BARRIER)
{

}

int RegularBarrier::getXPosition() const
{
    return xPosition;
}

int RegularBarrier::getYPosition() const
{
    return yPosition;
}

int RegularBarrier::getType() const
{
    return itemType;
}

void RegularBarrier::setPosition(int x, int y)
{
    xPosition = x;
    yPosition = y;
}

void RegularBarrier::setType(int type)
{
    itemType = type;
}

RegularBarrier::~RegularBarrier()
{

}
