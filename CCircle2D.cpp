#include "CCircle2D.h"

CCircle2D::CCircle2D()
	:GeometricObject()
{
	radius = 0;
}

CCircle2D::CCircle2D(double _x, double _y, double _r)
	:GeometricObject(_x, _y)
{
	radius = _r;
}

CCircle2D::CCircle2D(point _pos, double _r)
	:GeometricObject(_pos)
{
	radius = _r;
}

CCircle2D::~CCircle2D()
{
}

double CCircle2D::getRadius()
{
	return radius;
}

double CCircle2D::getArea()
{
	return radius * radius * M_PI;
}

double CCircle2D::getPerimeter()
{
	return radius * 2 * M_PI;
}

bool CCircle2D::contains(double _x, double _y)
{
	return (pow(radius, 2) >= pow(pos.x - _x, 2) + pow(pos.y - _y, 2));
}

bool CCircle2D::contains(CPoint _pt)
{
	return (pow(radius, 2) >= pow(pos.x - _pt.getX(), 2) + pow(pos.y - _pt.getY(), 2));
}

bool CCircle2D::contains(const CCircle2D& _circle)
{
	return (abs(sqrt(pow(pos.x - _circle.pos.x, 2) + pow(pos.y - _circle.pos.y, 2)) + _circle.radius) <= radius);
}

bool CCircle2D::overlaps(const CCircle2D& _circle)
{
	return (sqrt(pow(pos.x - _circle.pos.x, 2) + pow(pos.y - _circle.pos.y, 2)) <= (radius + radius));
}

bool contains(const CCircle2D& _circle, CPoint _pt)
{
	return _pt.distance(CPoint(_circle.pos.x, _circle.pos.y)) < _circle.radius;
}
