#include "longbarrier.h"

LongBarrier::LongBarrier():
    xPosition_(BARRIER_DEFAULT_POSITION_X)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_LONG_BARRIER)
{

}

LongBarrier::LongBarrier(int startPosition):
    xPosition_(startPosition)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_LONG_BARRIER)
{

}

int LongBarrier::getXPosition() const
{
    return xPosition_;
}

int LongBarrier::getYPosition() const
{
    return yPosition_;
}

int LongBarrier::getType() const
{
    return itemType_;
}

void LongBarrier::setPosition(int x, int y)
{
    xPosition_ = x;
    yPosition_ = y;
}

void LongBarrier::setType(int type)
{
    itemType_ = type;
}

LongBarrier::~LongBarrier()
{

}
