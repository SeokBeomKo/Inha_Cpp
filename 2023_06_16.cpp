#include <iostream>
#include "Monster.h"
#include "Fruit.h"
#include "dma.h"
using namespace std;

int main()
{
	/*Monster ms("Monster");

	ms.Name();

	FlyingMonster fm("FlyingMonster", true);
	fm.ShowName();*/

	/*
	��ĳ����, �ٿ�ĳ����
	���� ���
	*/
	/*Fruit* pf1 = new Apple;
	Fruit* pf2 = new Banana;

	pf1->name();
	pf2->name();

	delete pf2;
	delete pf1;*/

	/*
	�߻�ȭ ���� Ŭ����

	���� �����Լ��θ� �����Ǿ� �ִ� Ŭ���� = �������̽�
	*/

	/*
	��Ӱ� ���� �޸� �븳
	���� �޸� ���԰� �����带 ����ϴ� ��� ����

	use dma
	*/
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);

	cout << "baseDMA ��ü ��� : \n";
	cout << shirt << endl;
	cout << "lacksDMA ��ü ��� : \n";
	cout << balloon << endl;
	cout << "hasDMA ��ü ��� : \n";
	cout << map << endl;

	lacksDMA balloon2(balloon);

	cout << "lacksDMA ���� ��� : \n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA ���� ��� : \n";
	cout << map2 << endl;


	return 0;
}