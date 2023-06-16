//#include <iostream>
//#include "Vector3.h"
//#include "Circle2D.h"
//
//using namespace std;
//
//int main()
//{
//	/*
//	벡터 클래스 구현
//	*/
//	/*Vector3 v1(1, 2, 3), v2(-4, -5, 6);
//
//	cout << v1.length() << endl;
//	cout << v2.length() << endl;
//	cout << v1 * 3.0 << endl;
//	cout << v2 / 2 << endl;
//	cout << v1.Dot(v2) << endl;
//	cout << v1.Cross(v2) << endl;
//	cout << v1.Angle(v2) << endl;*/
//
//	/*
//	Q1. 벡터 연산을 구현하시오.
//	1. u = (-1, 3, 2) 이고 v = (3, -4, 1) 이라고 할때
//		다음 계산을 수행하라
//		(a) u + v
//		(b) u - v
//		(c) 3u + 2v
//		(d) -2u + v
//
//	2. u = (-1, 3, 2) 이고 v = (3, -4, 1) 이라고 할때
//	u 와 v 를 정규화 하라.
//
//	3. 다음 벡터들 사이의 각을 구하라.
//		(a) u = (1,1,1), v = (2,3,4)
//		(b) u = (1,1,0), v = (-2,2,0)
//		(c) u = (-1,-1,-1), v = (3,1,0)
//
//	4. 어떤 좌표계를 기준으로 점 A = (0,0,0), 0 = (0,1,3),
//		C = (5,1,0) 이 하나의 삼각형을 정의한다고 하자.
//		이 삼각형에 수직인 벡터를 구하라.
//	*/
//	/*Vector3 u(-1, 3, 2), v(3, -4, 1);
//	Vector3 tempu = u * 3, tempv = v * 2;
//	cout << u + v << endl << u - v << endl << tempu + tempv << endl;
//	tempu = -2 * u, tempv = v;
//	cout << tempu + tempv << endl;
//	cout << u.normalize() << endl << v.normalize() << endl;
//
//	u = Vector3(1, 1, 1), v = Vector3(2, 3, 4);
//	cout << u.Angle(v) << endl;
//	u = Vector3(1, 1, 0), v = Vector3(-2, 2, 0);
//	cout << u.Angle(v) << endl;
//	u = Vector3(-1, -1, -1), v = Vector3(3, 1, 0);
//	cout << u.Angle(v) << endl;
//
//	u = Vector3(0, 1, 3), v = Vector3(5, 1, 0);
//	cout << u.Cross(v) << endl;*/
//
//	/*
//	Q2. 다음의 기능을 포함하는 Cirect2D 클래스를 정의하라.
//		- 원의 중심을 나타내는 x,y 라는 두 개의 double 데이터 필드와
//			get 상수 함수
//		- double 데이터 필드 radius 와 get 상수 함수
//		- (x, y ) 가 (0, 0), radius 가 1 인 기본원을 생성하는 인수 없는 생성자
//		- 지정된 x, y 와 radius 로 원을 생성하는 생성자
//		- 원의 면적을 반환하는 getArea() 상수 함수
//		- 원의 둘레를 반환하는 getPerimeter() 상수 함수
//		- 지정된 점 (x, y) 가 생성된 원 내부에 있을 경우,
//			true 를 반환하는 contains(double x, double y) 상수 함수
//		- 지정된 원이 생선된 원 내부에 있을 경우,
//			true 를 반환하는 contains(const Circle2D& circle) 상수 함수
//		- 지정된 원이 생성된 원과 중첩되는 경우,
//			true 를 반환하는 overlaps(const Circle2D& circle) 상수 함수
//		- 클래스에 대한 UML 다이어그램을 그리고 클래스를 구현하라.
//
//		Circle2D 객체 c1(2, 2, 5.5), c2(2,2,5.5), c3(4,5,10.5) 를 생성하고
//		c1의 면적과 둘레, c1.contains(3,3), c1 contains(c2), c1.overlaps(c3) 의 결과를
//		화면에 출력하는 프로그램을 작성하라.
//	*/
//	/*Circle2D c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5);
//	Point a;
//	a.x = 3, a.y = 3;
//
//	cout << "c1 의 면적 : " << c1.getArea() << endl;
//	cout << "c1 의 둘레 : " << c1.getPerimeter() << endl;
//
//	cout << boolalpha;
//	cout << "pos(3,3) 이 c1 안에 있는가 ?" << c1.contains(a) << endl;
//	cout << "c2 가 c1 안에 있는가 ?" << c1.contains(c2) << endl;
//	cout << "c3 가 c1 과 겹치는가 ?" << c1.overlaps(c3) << endl;*/
//
//	/*
//	1. 후위 표기법
//	*/
//}