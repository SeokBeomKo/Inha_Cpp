#pragma once
#include "GeometricObject.h"
#include "CPoint.h"

class CRectangle2D : public GeometricObject
{
private:
	point scale;
public:
	CRectangle2D();
	CRectangle2D(point _pos, point _scale);
	CRectangle2D(point _pos, double _scaleX, double _scaleY);
	virtual ~CRectangle2D();

	CPoint getScale();
	double getScaleX();
	double getScaleY();

	void setScale(CPoint _scale);
	void setScaleX(double _x);
	void setScaleY(double _y);

	double getArea();
	double getPerimeter();

	bool contains(double _x, double _y);
	bool contains(const CRectangle2D& r);
	bool overlaps(const CRectangle2D& r);

	friend bool contains(const CRectangle2D& rect, CPoint pt);
};

