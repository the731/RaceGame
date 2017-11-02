#include "regularbarriercreator.h"

RegularBarrierCreator::RegularBarrierCreator()
{

}

IGameItem *RegularBarrierCreator::CreateGameItem()
{
    return new RegularBarrier;
}

RegularBarrierCreator::~RegularBarrierCreator()
{

}
