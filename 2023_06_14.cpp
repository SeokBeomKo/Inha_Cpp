//#include <iostream>
//#include "Circle2D.h"
//#include "Rectangle2D.h"
//#include "StringBad.h"
//
//using namespace std;
//
//void callme1(StringBad&);
//void callme2(StringBad);
//
//int main()
//{
//	/*
//	Q1. 다음을 포함하는 Rectangle2D 클래스를 정의하라.
//		- 직사각형의 중심을 나타내는 x, y 라는 두 개의 double 데이터 필드,
//			이에 대한 get 상수 함수와 set 함수, 사각형의 변은 x, y 축에
//			평행인 것으로 가정한다.
//		- double 데이터 필드 width, height 와 이에 대한 get 상수 함수와 set 함수
//		- (x, y)는 (0, 0), width, height 는 모두 1인 기본 직사각형을 생성하는
//			인수 없는 생성자
//		- 지정된 x, y width, height 로 직사각형을 생성하는 생성자
//		- 직사각형의 면적을 반환 getArea()
//		- 직사각형의 둘레를 반환 getPerimeter()
//		- contains(double x, double y) 지정된 점(x,y) 가 생성된 직사각형의 내부에 있을 경우, true 반환
//		- contains(const Rectangle2D &r) 지정된 직사각형이 생성된 직사각형의 내부에 있을 경우, true 반환
//		- overlaps(const Rectangle2D &r) 지정된 직사각형이 생성된 직사각형과 중첩되는 경우, true 반환
//		
//		클래스에 대한 UML 다이어그램을 그리고, 클래스를 구현하라
//
//		세 개의 rectangle2D 객체 r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)
//		r1 의 면적과 둘레, r1.contains(r2), r1.overlaps(r3) 결과
//	*/
//	/*Rectangle2D r1({ 2, 2 }, { 5.5, 4.9 }), r2({ 4, 5 }, { 10.5, 3.2 }), r3({ 3, 5 }, { 2.3, 5.4 });
//
//	cout << "r1 면적 : " << r1.getArea() << endl << "r1 둘레 : " << r1.getPerimeter() << endl;
//	cout << boolalpha;
//	cout  << r1.contains(1, 1) << endl << r1.contains(r2) << endl << r1.overlaps(r3) << endl;*/
//
//	/*
//	Q2. x와 y 축의 점을 표시하는 MyPoint 클래스를 설계하라.
//		- 좌표를 나타내는 두 개의 x, y 데이터 필드
//		- 점(0,0) 을 생성하는 디폴트 생성자
//		- 지정 좌표에 점을 생성하는 생성자
//		- x, y 데이터 필드를 위한 각각 두 개의 get 함수
//		- MyPoiny 유형의 한 점에서 다른 점까지의 거리를 반환하는 distance 함수
//
//		래스에 대한 UML 다이어그램
//
//		두 개의 점 (0,0) 과 (10,30,5) 의 거리를 표시하는 프로그램을 작성
//
//		서클 ,렉탱글 constains 함수 MyPoint 객체를 인자로 하는 프렌드 함수
//	*/
//	/*Circle2D c1(0,0,5);
//	Rectangle2D r1({ 0,0 }, { 5,5 });
//	MyPoint M_pt(5,6);
//	
//	cout << "Circle2D :" << c1.GetPoint().x << ", " << c1.GetPoint().y << ", " << c1.GetRadius() << endl;
//	cout << "Rectangle2D : " << r1.getPos().x << ", " << r1.getPos().y << ", " << r1.getScale().x << ", " << r1.getScale().y << endl;
//	cout << "MyPoint : " << M_pt.getX() << ", " << M_pt.getY() << endl;
//
//	cout << boolalpha;
//	cout << contains(c1, M_pt) << endl;
//	cout << contains(r1, M_pt) << endl;*/
//
//	{
//		cout << "내부 블록을 시작한다.\n";
//		StringBad headline1("Celery Stalks at Midninght");
//		StringBad headline2("Lettuce Prey");
//		StringBad sports("Spinach Leaves Bowl for Dollars");
//		cout << "headline1 : " << headline1 << endl;
//		cout << "headline2 : " << headline2 << endl;
//		cout << "sports : " << sports << endl;
//		callme1(headline1);
//		cout << "headline1 : " << headline1 << endl;
//		callme2(headline2);
//		cout << "headline2 : " << headline2 << endl;
//		cout << "하나의 객체를 다른 객체로 초기화 : \n";
//		StringBad sailor = sports;
//		cout << "sailor: " << sailor << endl;
//		cout << "하나의 객체를 다른 객체에 대입 : \n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << endl;
//		cout << "이 블록을 빠져나온다.\n";
//	}
//	cout << "main() 의 끝\n";
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "참조로 전달된 StringBad:\n";
//	cout << "		\"" << rsb << "\"\n";
//}
//void callme2(StringBad sb)
//{
//	cout << "값으로 전달된 StringBad:\n";
//	cout << "		\"" << sb << "\"\n";
//}
//
