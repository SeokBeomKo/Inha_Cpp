#include "CPoint.h"

CPoint::CPoint()
	:GeometricObject()
{
}

CPoint::CPoint(double _x, double _y)
	:GeometricObject(_x, _y)
{
}

CPoint::CPoint(point _pos)
	:GeometricObject(_pos)
{
}

CPoint::~CPoint()
{
}

double CPoint::distance(CPoint pt)
{
	return sqrt(pow(pos.x - pt.getPosX(), 2) + pow(pos.y - pt.getPosY(), 2));
}
