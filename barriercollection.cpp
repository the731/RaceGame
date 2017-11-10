#include "barriercollection.h"

BarrierCollection::BarrierCollection()
{
    regularBarrierCreator_ = new RegularBarrierCreator;
    doubleBarrierCreator_ = new DoubleBarrierCreator;
    longBarrierCreator_ = new LongBarrierCreator;
    carCreator_ = new CarCreator;
    addToCollection(regularBarrierCreator_->CreateGameItem());
    addToCollection(doubleBarrierCreator_->CreateGameItem());
    addToCollection(longBarrierCreator_->CreateGameItem());
    car_ = carCreator_->CreateGameItem();
}

void BarrierCollection::addToCollection(IGameItem* item)
{
    barriers_.push_back(item);
}

IGameItem* BarrierCollection::getRandomBarrier()
{
   srand (time(NULL));
   return barriers_.at(rand() % (barriers_.capacity() - ONE_STEP));
}

IGameItem *BarrierCollection::getCar()
{
    return car_;
}

BarrierCollection::~BarrierCollection()
{
    delete regularBarrierCreator_;
    delete doubleBarrierCreator_;
    delete longBarrierCreator_;
    delete carCreator_;

    for(int i = BEGIN_INDEX; i < barriers_.capacity(); i++)
    {
        delete barriers_.at(i);
    }
    delete car_;
}
