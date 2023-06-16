#include "Circle2D.h"

Circle2D::Circle2D()
{
	pos.x = 0;
	pos.y = 0;
	radius = 0;
}

Circle2D::Circle2D(double _x, double _y, double _radius)
{
	pos.x = _x;
	pos.y = _y;
	radius = _radius;
}

Circle2D::~Circle2D()
{
}

Point Circle2D::GetPoint()
{
	return pos;
}

double Circle2D::GetRadius()
{
	return radius;
}

double Circle2D::getArea()
{
	return radius * radius * M_PI;
}

double Circle2D::getPerimeter()
{
	return radius * 2 * M_PI;
}

bool Circle2D::contains(Point c1)
{
	if (pow(radius, 2) >= pow(pos.x - c1.x, 2) + pow(pos.y - c1.y, 2))
		return true;
	return false;
}

bool Circle2D::contains(const Circle2D& circle)
{
	if (abs(sqrt(pow(pos.x - circle.pos.x, 2) + pow(pos.y - circle.pos.y, 2)) + circle.radius) <= radius)
		return true;
	return false;	
}

bool Circle2D::overlaps(const Circle2D& circle)
{
	if (sqrt(pow(pos.x - circle.pos.x, 2) + pow(pos.y - circle.pos.y, 2)) <= (radius + radius))
		return true;
	return false;
}

bool contains(const Circle2D& circle, MyPoint pt)
{
	return pt.Distance(MyPoint(circle.pos.x, circle.pos.y)) < circle.radius;
}
