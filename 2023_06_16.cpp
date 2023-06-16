#include <iostream>
#include "Monster.h"
#include "Fruit.h"

using namespace std;

int main()
{
	/*Monster ms("Monster");

	ms.Name();

	FlyingMonster fm("FlyingMonster", true);
	fm.ShowName();*/

	/*
	업캐스팅, 다운캐스팅
	다형 상속
	*/

	Fruit* pf1 = new Apple;
	Fruit* pf2 = new Banana;

	pf1->name();
	pf2->name();

	delete pf2;
	delete pf1;

	return 0;
}