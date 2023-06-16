#pragma once
#include <cmath>

struct Point
{
	double x;
	double y;
};

class MyPoint
{
private:
	double x;
	double y;
public:
	MyPoint();
	MyPoint(double _x, double _y);
	~MyPoint();

	void setX(double _x);
	void setY(double _y);

	double getX();
	double getY();

	double Distance(MyPoint pt);
};

