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

	double getArea();									// 원의 면적
	double getPerimeter();								// 원의 둘레
	bool contains(Point c1);							// 지정된 점(x, y) 가 생성된 원 내부에 있을 경우, true 를 반환
	bool contains(const Circle2D& circle);				// 지정된 원이 생선된 원 내부에 있을 경우, true 를 반환
	bool overlaps(const Circle2D& circle);				// 지정된 원이 생성된 원과 중첩되는 경우, true 를 반환

	friend bool contains(const Circle2D& circle, MyPoint pt);
};

