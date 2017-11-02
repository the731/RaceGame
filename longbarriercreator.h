#ifndef LONGBARRIERCREATOR_H
#define LONGBARRIERCREATOR_H

#include"igameitemcreator.h"
#include"longbarrier.h"

class LongBarrierCreator : public IGameItemCreator
{
public:
    LongBarrierCreator();

    virtual IGameItem *CreateGameItem();

    virtual ~LongBarrierCreator();
};

#endif // LONGBARRIERCREATOR_H
