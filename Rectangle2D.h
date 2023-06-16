#pragma once
#include <math.h>
#include <cmath>
#include "MyPoint.h"

class Rectangle2D
{
private:
	Point pos;
	Point scale;
public:
	Rectangle2D();
	Rectangle2D(Point _pos, Point _scale);
	~Rectangle2D();

	Point getPos();
	void setPos(Point _pos);
	Point getScale();
	void setScale(Point _scale);

	double getArea();
	double getPerimeter();

	bool contains(double _x, double _y);
	bool contains(const Rectangle2D& r);
	bool overlaps(const Rectangle2D& r);

	friend bool contains(const Rectangle2D& rect, MyPoint pt);
};

