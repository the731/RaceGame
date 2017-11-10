#ifndef CARCREATOR_H
#define CARCREATOR_H

#include "igameitemcreator.h"
#include "car.h"

class CarCreator : public IGameItemCreator
{
public:
    CarCreator();

    virtual IGameItem *CreateGameItem();

    virtual ~CarCreator();
};

#endif // CARCREATOR_H
