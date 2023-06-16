#pragma once
#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <math.h>
#include "MyPoint.h"



class Circle2D
{
private:
	Point pos;
	double radius;
public:
	Circle2D();
	Circle2D(double _x, double _y, double _radius);
	~Circle2D();

	Point GetPoint();
	double GetRadius();

	double getArea();									// ���� ����
	double getPerimeter();								// ���� �ѷ�
	bool contains(Point c1);							// ������ ��(x, y) �� ������ �� ���ο� ���� ���, true �� ��ȯ
	bool contains(const Circle2D& circle);				// ������ ���� ������ �� ���ο� ���� ���, true �� ��ȯ
	bool overlaps(const Circle2D& circle);				// ������ ���� ������ ���� ��ø�Ǵ� ���, true �� ��ȯ

	friend bool contains(const Circle2D& circle, MyPoint pt);
};

