#ifndef REGULARBARRIER_H
#define REGULARBARRIER_H

#include "igameitem.h"
#include "racegameconstants.h"

using namespace RaceGameConstants;

class RegularBarrier : public IGameItem
{
public:
    RegularBarrier();
    RegularBarrier(int startPosition);

    virtual int getXPosition() const;
    virtual int getYPosition() const;
    virtual int getType() const;
    virtual void setPosition(int x, int y);
    virtual void setType(int type);

    virtual ~RegularBarrier();

private:
    int xPosition_;
    int yPosition_;
    int itemType_;
};

#endif // REGULARBARRIER_H
