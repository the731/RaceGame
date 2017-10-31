#ifndef REGULARBARRIER_H
#define REGULARBARRIER_H

#include "igameitem.h"
#include "racegameconstants.h"

using namespace RaceGameConstants;

class RegularBarrier : public IGameItem
{
public:
    RegularBarrier();

    virtual int getXPosition() const;
    virtual int getYPosition() const;
    virtual int getType() const;
    virtual void setPosition(int x, int y);
    virtual void setType(int type);

    virtual ~RegularBarrier();

private:
    int xPosition;
    int yPosition;
    int itemType;
};

#endif // REGULARBARRIER_H
