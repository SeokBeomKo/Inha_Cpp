#pragma once
#include "GeometricObject.h"
#include "CPoint.h"

class CCircle2D : public GeometricObject
{
private:
	double radius;
public:
	CCircle2D();
	CCircle2D(double _x, double _y, double _r);
	CCircle2D(point _pos, double _r);
	virtual ~CCircle2D();

	double getRadius();

	double getArea();									// 원의 면적
	double getPerimeter();								// 원의 둘레

	bool contains(double _x, double _y);				// 지정된 점(x, y) 가 생성된 원 내부에 있을 경우, true 를 반환
	bool contains(CPoint _pt);							// 지정된 점(x, y) 가 생성된 원 내부에 있을 경우, true 를 반환
	bool contains(const CCircle2D& _circle);				// 지정된 원이 생선된 원 내부에 있을 경우, true 를 반환
	bool overlaps(const CCircle2D& _circle);				// 지정된 원이 생성된 원과 중첩되는 경우, true 를 반환

	friend bool contains(const CCircle2D& _circle, CPoint _pt);
};

