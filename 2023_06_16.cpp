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
	업캐스팅, 다운캐스팅
	다형 상속
	*/
	/*Fruit* pf1 = new Apple;
	Fruit* pf2 = new Banana;

	pf1->name();
	pf2->name();

	delete pf2;
	delete pf1;*/

	/*
	추상화 기초 클래스

	순수 가상함수로만 구성되어 있는 클래스 = 인터페이스
	*/

	/*
	상속과 동적 메모리 대립
	동적 메모리 대입과 프렌드를 사용하는 상속 예제

	use dma
	*/
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);

	cout << "baseDMA 객체 출력 : \n";
	cout << shirt << endl;
	cout << "lacksDMA 객체 출력 : \n";
	cout << balloon << endl;
	cout << "hasDMA 객체 출력 : \n";
	cout << map << endl;

	lacksDMA balloon2(balloon);

	cout << "lacksDMA 복사 결과 : \n";
	cout << balloon2 << endl;
	hasDMA map2;
	map2 = map;
	cout << "hasDMA 대입 결과 : \n";
	cout << map2 << endl;


	return 0;
}