#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
    pos = {0};
}

GeometricObject::GeometricObject(double _x, double _y)
    :pos(point{ _x, _y })
{
}

GeometricObject::GeometricObject(point _pos)
    :pos(_pos)
{
}

GeometricObject::~GeometricObject()
{
}

double GeometricObject::getX()
{
    return pos.x;
}

double GeometricObject::getY()
{
    return pos.y;
}

point GeometricObject::getPos()
{
    return pos;
}

void GeometricObject::setX(double _x)
{
    pos.x = _x;
}

void GeometricObject::setY(double _y)
{
    pos.y = _y;
}

void GeometricObject::setPos(double _x, double _y)
{
    pos.x = _x;
    pos.y = _y;
}

void GeometricObject::setPos(point _pos)
{
    pos.x = _pos.x;
    pos.y = _pos.y;
}
