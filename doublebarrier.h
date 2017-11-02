#ifndef DOUBLEBARRIER_H
#define DOUBLEBARRIER_H

#include "igameitem.h"
#include "racegameconstants.h"

using namespace RaceGameConstants;

class DoubleBarrier : public IGameItem
{
public:
    DoubleBarrier();
    DoubleBarrier(int startPosition);

    virtual int getXPosition() const;
    virtual int getYPosition() const;
    virtual int getType() const;
    virtual void setPosition(int x, int y);
    virtual void setType(int type);

    virtual ~DoubleBarrier();

private:
    int xPosition_;
    int yPosition_;
    int itemType_;
};

#endif // DOUBLEBARRIER_H
