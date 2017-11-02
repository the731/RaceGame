#ifndef IGAMEITEMCREATOR_H
#define IGAMEITEMCREATOR_H

#include"igameitem.h"

class IGameItemCreator
{
public:

    virtual IGameItem* CreateGameItem() = 0;

    virtual ~IGameItemCreator() = 0;
};

#endif // IGAMEITEMCREATOR_H
