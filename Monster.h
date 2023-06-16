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
};

class FlyingMonster : public Monster
{
private:
	bool isFlying;
public:
	FlyingMonster(string str, bool bFlying);
	void ShowName();
};

