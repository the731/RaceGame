#include "doublebarriercreator.h"

DoubleBarrierCreator::DoubleBarrierCreator()
{

}

IGameItem *DoubleBarrierCreator::CreateGameItem()
{
    return new DoubleBarrier;
}

DoubleBarrierCreator::~DoubleBarrierCreator()
{

}
