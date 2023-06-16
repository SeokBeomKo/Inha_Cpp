#include "Rectangle2D.h"

Rectangle2D::Rectangle2D()
{
	pos = {0,0};
	scale = {1,1};
}

Rectangle2D::Rectangle2D(Point _pos, Point _scale)
{
	pos = _pos;
	scale = _scale;
}

Rectangle2D::~Rectangle2D()
{
}

Point Rectangle2D::getPos()
{
	return pos;
}

void Rectangle2D::setPos(Point _pos)
{
	pos = _pos;
}

Point Rectangle2D::getScale()
{
	return scale;
}

void Rectangle2D::setScale(Point _scale)
{
	scale = _scale;
}

double Rectangle2D::getArea()
{
	return (scale.x * scale.y);
}

double Rectangle2D::getPerimeter()
{
	return (scale.x + scale.y) * 2;
}

bool Rectangle2D::contains(double _x, double _y)
{
	return _x < (pos.x + scale.x * 0.5f) &&
		_x >(pos.x - scale.x * 0.5f) &&
		_y < (pos.x + scale.y * 0.5f) &&
		_y >(pos.x - scale.y * 0.5f);
}

bool Rectangle2D::contains(const Rectangle2D& r)
{
	return ((pos.x + scale.x * 0.5f) >= (r.pos.x + r.scale.x * 0.5f) &&
		(pos.x - scale.x * 0.5f) <= (r.pos.x - r.scale.x * 0.5f) &&
		(pos.y + scale.y * 0.5f) >= (r.pos.y + r.scale.y * 0.5f) &&
		(pos.y - scale.y * 0.5f) <= (r.pos.y - r.scale.y * 0.5f));
}

bool Rectangle2D::overlaps(const Rectangle2D& r)
{
	return (abs(pos.x - r.pos.x) <= (scale.x + r.scale.x) * 0.5f
		&& abs(pos.y - r.pos.y) <= (scale.y + r.scale.y) * 0.5f);
}

bool contains(const Rectangle2D& rect, MyPoint pt)
{
	double dis = pt.Distance(MyPoint(rect.pos.x, rect.pos.y));
	return pt.getX() < (rect.pos.x + rect.scale.x * 0.5f) &&
		pt.getX() > (rect.pos.x - rect.scale.x * 0.5f) &&
		pt.getY() < (rect.pos.x + rect.scale.y * 0.5f) &&
		pt.getY() > (rect.pos.x - rect.scale.y * 0.5f);
}
