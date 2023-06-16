#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	Monster ms("Monster");

	ms.Name();

	FlyingMonster fm("FlyingMonster", true);
	fm.ShowName();

	return 0;
}