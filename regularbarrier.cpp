#include "regularbarrier.h"

RegularBarrier::RegularBarrier():
    xPosition_(REGULAR_BARRIER_DEFAULT_POSITION_X)
   ,yPosition_(REGULAR_BARRIER_DEFAULT_POSITION_Y)
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
