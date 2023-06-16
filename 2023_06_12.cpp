//#include <iostream>
//#include "Vector3.h"
//#include "Circle2D.h"
//
//using namespace std;
//
//int main()
//{
//	/*
//	���� Ŭ���� ����
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
//	Q1. ���� ������ �����Ͻÿ�.
//	1. u = (-1, 3, 2) �̰� v = (3, -4, 1) �̶�� �Ҷ�
//		���� ����� �����϶�
//		(a) u + v
//		(b) u - v
//		(c) 3u + 2v
//		(d) -2u + v
//
//	2. u = (-1, 3, 2) �̰� v = (3, -4, 1) �̶�� �Ҷ�
//	u �� v �� ����ȭ �϶�.
//
//	3. ���� ���͵� ������ ���� ���϶�.
//		(a) u = (1,1,1), v = (2,3,4)
//		(b) u = (1,1,0), v = (-2,2,0)
//		(c) u = (-1,-1,-1), v = (3,1,0)
//
//	4. � ��ǥ�踦 �������� �� A = (0,0,0), 0 = (0,1,3),
//		C = (5,1,0) �� �ϳ��� �ﰢ���� �����Ѵٰ� ����.
//		�� �ﰢ���� ������ ���͸� ���϶�.
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
//	Q2. ������ ����� �����ϴ� Cirect2D Ŭ������ �����϶�.
//		- ���� �߽��� ��Ÿ���� x,y ��� �� ���� double ������ �ʵ��
//			get ��� �Լ�
//		- double ������ �ʵ� radius �� get ��� �Լ�
//		- (x, y ) �� (0, 0), radius �� 1 �� �⺻���� �����ϴ� �μ� ���� ������
//		- ������ x, y �� radius �� ���� �����ϴ� ������
//		- ���� ������ ��ȯ�ϴ� getArea() ��� �Լ�
//		- ���� �ѷ��� ��ȯ�ϴ� getPerimeter() ��� �Լ�
//		- ������ �� (x, y) �� ������ �� ���ο� ���� ���,
//			true �� ��ȯ�ϴ� contains(double x, double y) ��� �Լ�
//		- ������ ���� ������ �� ���ο� ���� ���,
//			true �� ��ȯ�ϴ� contains(const Circle2D& circle) ��� �Լ�
//		- ������ ���� ������ ���� ��ø�Ǵ� ���,
//			true �� ��ȯ�ϴ� overlaps(const Circle2D& circle) ��� �Լ�
//		- Ŭ������ ���� UML ���̾�׷��� �׸��� Ŭ������ �����϶�.
//
//		Circle2D ��ü c1(2, 2, 5.5), c2(2,2,5.5), c3(4,5,10.5) �� �����ϰ�
//		c1�� ������ �ѷ�, c1.contains(3,3), c1 contains(c2), c1.overlaps(c3) �� �����
//		ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
//	*/
//	/*Circle2D c1(2, 2, 5.5), c2(2, 2, 5.5), c3(4, 5, 10.5);
//	Point a;
//	a.x = 3, a.y = 3;
//
//	cout << "c1 �� ���� : " << c1.getArea() << endl;
//	cout << "c1 �� �ѷ� : " << c1.getPerimeter() << endl;
//
//	cout << boolalpha;
//	cout << "pos(3,3) �� c1 �ȿ� �ִ°� ?" << c1.contains(a) << endl;
//	cout << "c2 �� c1 �ȿ� �ִ°� ?" << c1.contains(c2) << endl;
//	cout << "c3 �� c1 �� ��ġ�°� ?" << c1.overlaps(c3) << endl;*/
//
//	/*
//	1. ���� ǥ���
//	*/
//}