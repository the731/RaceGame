#include "longbarriercreator.h"

LongBarrierCreator::LongBarrierCreator()
{

}

IGameItem *LongBarrierCreator::CreateGameItem()
{
    return new LongBarrier;
}

LongBarrierCreator::~LongBarrierCreator()
{

}
