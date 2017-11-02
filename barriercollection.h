#ifndef BARRIERCOLLECTION_H
#define BARRIERCOLLECTION_H

#include <vector>
#include <time.h>
#include <stdlib.h>
#include "igameitem.h"
#include "igameitemcreator.h"
#include "regularbarriercreator.h"
#include "doublebarriercreator.h"
#include "longbarriercreator.h"
#include "regularbarrier.h"
#include "doublebarrier.h"
#include "longbarrier.h"
#include"racegameconstants.h"

using namespace RaceGameConstants;

class BarrierCollection
{
public:
    BarrierCollection();

    IGameItem* getRandomBarrier();

    ~BarrierCollection();

private:

    void addToCollection(IGameItem* item);

    std::vector<IGameItem*> barriers_;

    RegularBarrierCreator* regularBarrierCreator_;
    DoubleBarrierCreator* doubleBarrierCreator_;
    LongBarrierCreator* longBarrierCreator_;

};

#endif // BARRIERCOLLECTION_H
