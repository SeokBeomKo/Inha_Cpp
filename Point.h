#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double _x, double _y);
	~Point();

	Point get();
	double getX();
	double getY();

	void set(double _x, double _y);
	void set(Point pt);
	void setX(double _x);
	void setY(double _y);
};

