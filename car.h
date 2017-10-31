#ifndef CAR_H
#define CAR_H

#include"igameitem.h"
#include"racegameconstants.h"

using namespace RaceGameConstants;

class Car : public IGameItem
{
public:
    Car();

    virtual int getXPosition() const;
    virtual int getYPosition() const;
    virtual int getType() const;
    virtual void setPosition(int x, int y);
    virtual void setType(int type);

    virtual ~Car();

private:
    int xPosition;
    int yPosition;
    int itemType;
};

#endif // CAR_H
