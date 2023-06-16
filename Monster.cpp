#include "Monster.h"

Monster::Monster(string str)
	:name(str)
{
}

void Monster::Name() const
{
	cout << name << "\n";
}

string Monster::GetName()
{
	return name;
}

void FlyingMonster::Attack()
{
}

FlyingMonster::FlyingMonster(string str, bool bFlying)
	:Monster(str), isFlying(bFlying)
{
}

void FlyingMonster::ShowName()
{
	if (isFlying)	cout << GetName() << "은 공중에 있다\n";
	else			cout << GetName() << "은 땅에 있다\n";

}
