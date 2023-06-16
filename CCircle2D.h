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

	double getArea();									// ���� ����
	double getPerimeter();								// ���� �ѷ�

	bool contains(double _x, double _y);				// ������ ��(x, y) �� ������ �� ���ο� ���� ���, true �� ��ȯ
	bool contains(CPoint _pt);							// ������ ��(x, y) �� ������ �� ���ο� ���� ���, true �� ��ȯ
	bool contains(const CCircle2D& _circle);				// ������ ���� ������ �� ���ο� ���� ���, true �� ��ȯ
	bool overlaps(const CCircle2D& _circle);				// ������ ���� ������ ���� ��ø�Ǵ� ���, true �� ��ȯ

	friend bool contains(const CCircle2D& _circle, CPoint _pt);
};

