#include <iostream>

class Monster0
{
private:
	double x, y, z;
	double hp;
	double attackPower;
	double defencePower;
public:
	void Update();
	void Render();
	void Attack();
	void Defence();

	double getXPos() { return x; }
	double getYPos() { return y; }
	double getZPos() { return z; }
};

class Monster1 : public Monster0
{
private:
public:
	void Attack();
};

int main()
{

}