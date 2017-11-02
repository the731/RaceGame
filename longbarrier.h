#ifndef LONGBARRIER_H
#define LONGBARRIER_H

#include "igameitem.h"
#include "racegameconstants.h"

using namespace RaceGameConstants;

class LongBarrier : public IGameItem
{
public:
    LongBarrier();
    LongBarrier(int startPosition);

    virtual int getXPosition() const;
    virtual int getYPosition() const;
    virtual int getType() const;
    virtual void setPosition(int x, int y);
    virtual void setType(int type);

    virtual ~LongBarrier();

private:
    int xPosition_;
    int yPosition_;
    int itemType_;
};

#endif // LONGBARRIER_H
