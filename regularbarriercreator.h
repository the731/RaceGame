#ifndef REGULARBARRIERCREATOR_H
#define REGULARBARRIERCREATOR_H

#include"igameitemcreator.h"
#include"regularbarrier.h"


class RegularBarrierCreator : public IGameItemCreator
{
public:
    RegularBarrierCreator();

    virtual IGameItem *CreateGameItem();

    virtual ~RegularBarrierCreator();

};

#endif // REGULARBARRIERCREATOR_H
