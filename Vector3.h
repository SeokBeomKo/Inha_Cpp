#pragma once
#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <math.h>

class Vector3
{
private:
	double x, y, z;
public:
	Vector3();
	Vector3(double _x, double _y, double _z);
	~Vector3();

	// 연산자 오버로딩
	bool operator == (Vector3& v);
	bool operator != (Vector3& v);
	Vector3 operator + (Vector3& v);
	Vector3 operator - (Vector3& v);
	Vector3 operator * (double n);
	Vector3 operator / (double n);

	double length();
	Vector3 normalize();

	double Dot(Vector3& v1);
	Vector3 Cross(Vector3& v1);
	double Angle(Vector3& v1);

	friend Vector3 operator * (double n, Vector3& vec);
	friend std::ostream& operator<<(std::ostream& os, const Vector3& v);
};

