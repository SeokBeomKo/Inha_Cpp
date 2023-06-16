#include "CRectangle2D.h"

CRectangle2D::CRectangle2D()
	:GeometricObject()
{
	scale = {};
}

CRectangle2D::CRectangle2D(point _pos, point _scale)
	:GeometricObject(_pos)
{
	scale = _scale;
}

CRectangle2D::CRectangle2D(point _pos, double _scaleX, double _scaleY)
	: GeometricObject(_pos)
{
	scale = point{ _scaleX, _scaleY };
}

CRectangle2D::~CRectangle2D()
{
}

CPoint CRectangle2D::getScale()
{
	return CPoint(scale);
}

double CRectangle2D::getScaleX()
{
	return scale.x;
}

double CRectangle2D::getScaleY()
{
	return scale.y;
}

void CRectangle2D::setScale(CPoint _scale)
{
	scale = _scale.getPos();
}

void CRectangle2D::setScaleX(double _x)
{
	scale.x = _x;
}

void CRectangle2D::setScaleY(double _y)
{
	scale.y = _y;
}

double CRectangle2D::getArea()
{
	return scale.x * scale.y;
}

double CRectangle2D::getPerimeter()
{
	return (scale.x + scale.y) * 2;
}

bool CRectangle2D::contains(double _x, double _y)
{
	return _x < (pos.x + scale.x * 0.5f) &&
		_x >(pos.x - scale.x * 0.5f) &&
		_y < (pos.x + scale.y * 0.5f) &&
		_y >(pos.x - scale.y * 0.5f);
}

bool CRectangle2D::contains(const CRectangle2D& r)
{
	return ((pos.x + scale.x * 0.5f) >= (r.pos.x + r.scale.x * 0.5f) &&
		(pos.x - scale.x * 0.5f) <= (r.pos.x - r.scale.x * 0.5f) &&
		(pos.y + scale.y * 0.5f) >= (r.pos.y + r.scale.y * 0.5f) &&
		(pos.y - scale.y * 0.5f) <= (r.pos.y - r.scale.y * 0.5f));
}

bool CRectangle2D::overlaps(const CRectangle2D& r)
{
	return (abs(pos.x - r.pos.x) <= (scale.x + r.scale.x) * 0.5f
		&& abs(pos.y - r.pos.y) <= (scale.y + r.scale.y) * 0.5f);
}

bool contains(const CRectangle2D& rect, CPoint pt)
{
	//double dis = pt.distance(CPoint(rect.pos.x, rect.pos.y));
	return pt.getX() < (rect.pos.x + rect.scale.x * 0.5f) &&
		pt.getX() > (rect.pos.x - rect.scale.x * 0.5f) &&
		pt.getY() < (rect.pos.x + rect.scale.y * 0.5f) &&
		pt.getY() > (rect.pos.x - rect.scale.y * 0.5f);
}
