#include "Vector3.h"

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(double _x, double _y, double _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Vector3::~Vector3()
{
}

bool Vector3::operator==(Vector3& v)
{
	return (this->x == v.x && this->y == v.y && this->z == v.z);
}

bool Vector3::operator!=(Vector3& v)
{
	return (this->x != v.x || this->y != v.y || this->z != v.z);
}

Vector3 Vector3::operator+(Vector3& v)
{
	return Vector3(this->x + v.x, this->y + v.y, this->z + v.z);
}

Vector3 Vector3::operator-(Vector3& v)
{
	return Vector3(this->x - v.x, this->y - v.y, this->z - v.z);
}

Vector3 Vector3::operator*(double n)
{
	return Vector3(this->x * n, this->y * n, this->z * n);
}

Vector3 Vector3::operator/(double n)
{
	return Vector3(this->x / n, this->y / n, this->z / n);
}


double Vector3::length()
{
	return sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalize()
{
	double len = length();
	return Vector3(x / len, y / len, z / len);
}

double Vector3::Dot(Vector3& v1)
{
	return (v1.x * x) + (v1.y * y) + (v1.z * z);
}

Vector3 Vector3::Cross(Vector3& v1)
{
	Vector3 cross;
	cross.x = y * v1.z - z * v1.y;
	cross.y = z * v1.x - x * v1.z;
	cross.z = x * v1.y - y * v1.x;
	return cross;
}

double Vector3::Angle(Vector3& v1)
{
	return (acos(this->Dot(v1) / (this->length() * v1.length()))) * 180 /  M_PI;
}

Vector3 operator*(double n, Vector3& vec)
{
	Vector3 a(vec.x * n, vec.y * n, vec.z * n);
	return a;
}

std::ostream& operator<<(std::ostream& os, const Vector3& v)
{
	os << v.x << v.y << v.z;
	return os;
}
