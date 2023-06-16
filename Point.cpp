#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double _x, double _y)
{
	x = _x;
	y = _y;
}

Point::~Point()
{
}

Point Point::get()
{

	return Point(this->x, this->y);
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

void Point::set(double _x, double _y)
{
	x = _x;
	y = _y;
}

void Point::set(Point pt)
{
	setX(pt.getX());
	setY(pt.getY());
}

void Point::setX(double _x)
{
	x = _x;
}

void Point::setY(double _y)
{
	y = _y;
}

