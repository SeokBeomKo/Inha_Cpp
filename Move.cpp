#include "Move.h"
#include <iostream>

using namespace std;	

Move::Move(double a, double b)
{
	this->x = a;
	this->y = b;
}

Move::~Move()
{
}

void Move::showMove() const
{
	cout << this->x << ", " << this->y << endl;
}

Move Move::add(const Move& m) const
{
	return Move(this->x + m.x, this->y + m.y);
}

void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
}
