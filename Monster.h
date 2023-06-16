#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster
{
private:
	string name;
public:
	Monster() { name = ""; }
	Monster(string str);

	void Name() const;
	void SetName(string str) { name = str; }
	string GetName();

	virtual void Attack() = 0;
protected:
	int hp;
};

class FlyingMonster : public Monster
{
private:
	bool isFlying;
public:
	virtual void Attack();
	FlyingMonster(string str, bool bFlying);
	void ShowName();

	void setHP(int _hp) { hp = _hp; }
};

