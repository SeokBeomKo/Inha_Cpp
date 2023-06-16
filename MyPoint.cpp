#include "MyPoint.h"

MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}

MyPoint::MyPoint(double _x, double _y)
{
	x = _x;
	y = _y;
}

MyPoint::~MyPoint()
{
}

void MyPoint::setX(double _x)
{
	x = _x;
}

void MyPoint::setY(double _y)
{
	y = _y;
}

double MyPoint::getX()
{
	return x;
}

double MyPoint::getY()
{
	return y;
}

double MyPoint::Distance(MyPoint pt)
{
	return sqrt(pow(x - pt.x, 2) + pow(y - pt.y, 2));
}
