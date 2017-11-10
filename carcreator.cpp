#include "carcreator.h"

CarCreator::CarCreator()
{

}

IGameItem *CarCreator::CreateGameItem()
{
    return new Car;
}

CarCreator::~CarCreator()
{

}
