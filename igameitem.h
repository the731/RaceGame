#ifndef IGAMEITEM_H
#define IGAMEITEM_H


class IGameItem
{
public:

    virtual int getXPosition() const = 0;
    virtual int getYPosition() const = 0;
    virtual int getType() const = 0;
    virtual void setPosition(const int x, const int y) = 0;
    virtual void setType(const int type) = 0;

    virtual ~IGameItem() = 0;
};

#endif // IGAMEITEM_H
