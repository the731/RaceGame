#include "regularbarrier.h"

RegularBarrier::RegularBarrier():
    xPosition_(BARRIER_DEFAULT_POSITION_X)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_REGULAR_BARRIER)
{

}

RegularBarrier::RegularBarrier(int startPosition):
    xPosition_(startPosition)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_REGULAR_BARRIER)
{

}

int RegularBarrier::getXPosition() const
{
    return xPosition_;
}

int RegularBarrier::getYPosition() const
{
    return yPosition_;
}

int RegularBarrier::getType() const
{
    return itemType_;
}

void RegularBarrier::setPosition(int x, int y)
{
    xPosition_ = x;
    yPosition_ = y;
}

void RegularBarrier::setType(int type)
{
    itemType_ = type;
}

RegularBarrier::~RegularBarrier()
{

}
