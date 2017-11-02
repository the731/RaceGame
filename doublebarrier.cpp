#include "doublebarrier.h"

DoubleBarrier::DoubleBarrier():
    xPosition_(BARRIER_DEFAULT_POSITION_X)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_DOUBLE_BARRIER)
{

}

DoubleBarrier::DoubleBarrier(int startPosition):
    xPosition_(startPosition)
   ,yPosition_(BARRIER_DEFAULT_POSITION_Y)
   ,itemType_(TYPE_DOUBLE_BARRIER)
{

}

int DoubleBarrier::getXPosition() const
{
    return xPosition_;
}

int DoubleBarrier::getYPosition() const
{
    return yPosition_;
}

int DoubleBarrier::getType() const
{
    return itemType_;
}

void DoubleBarrier::setPosition(int x, int y)
{
    xPosition_ = x;
    yPosition_ = y;
}

void DoubleBarrier::setType(int type)
{
    itemType_ = type;
}

DoubleBarrier::~DoubleBarrier()
{

}
