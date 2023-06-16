#pragma once
#include "GeometricObject.h"

class CPoint : public GeometricObject
{
private:
public:
	CPoint();
	CPoint(double _x, double _y);
	CPoint(point _pos);
	virtual ~CPoint();

	double distance(CPoint pt);
};

