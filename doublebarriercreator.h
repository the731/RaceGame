#ifndef DOUBLEBARRIERCREATOR_H
#define DOUBLEBARRIERCREATOR_H

#include"igameitemcreator.h"
#include"doublebarrier.h"

class DoubleBarrierCreator : public IGameItemCreator
{
public:
    DoubleBarrierCreator();

    virtual IGameItem *CreateGameItem();

    virtual ~DoubleBarrierCreator();
};

#endif // DOUBLEBARRIERCREATOR_H
