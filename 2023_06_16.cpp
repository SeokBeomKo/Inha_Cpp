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
	/*baseDMA shirt("Portabelly", 8);
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
	cout << map2 << endl;*/

	/*
	클래스 설계시 주의점

	디폴트 생성자
	복사 생성자
		- 새 객체를 동일한 클래스의 다른 객체로 초기화할 떼
		- 객체가 함수에 값으로 전달될 때
		- 함수가 객체를 값으로 리턴할 때
		- 컴파일러가 임시 객체를 생성할 때
	대입 연산자

	클래스 메서드에 관련된 그 밖의 고려사항
	생성자 관련
		-
	파괴자 관련 사항
		-
	변환 관련 사항
		-
	값으로 전달과 참조로 전달
		-
	*/

	return 0;
}