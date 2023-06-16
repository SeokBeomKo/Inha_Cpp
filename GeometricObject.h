#pragma once
#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <math.h>

using namespace std;

struct point
{
	double x;
	double y;
};

class GeometricObject
{
protected:
	point pos;
public:
	GeometricObject();
	GeometricObject(double _x, double _y);
	GeometricObject(point _pos);
	virtual ~GeometricObject();

	double getX();
	double getY();
	point getPos();

	void setX(double _x);
	void setY(double _y);
	void setPos(double _x, double _y);
	void setPos(point _pos);
};

