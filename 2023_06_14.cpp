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
//	Q1. ������ �����ϴ� Rectangle2D Ŭ������ �����϶�.
//		- ���簢���� �߽��� ��Ÿ���� x, y ��� �� ���� double ������ �ʵ�,
//			�̿� ���� get ��� �Լ��� set �Լ�, �簢���� ���� x, y �࿡
//			������ ������ �����Ѵ�.
//		- double ������ �ʵ� width, height �� �̿� ���� get ��� �Լ��� set �Լ�
//		- (x, y)�� (0, 0), width, height �� ��� 1�� �⺻ ���簢���� �����ϴ�
//			�μ� ���� ������
//		- ������ x, y width, height �� ���簢���� �����ϴ� ������
//		- ���簢���� ������ ��ȯ getArea()
//		- ���簢���� �ѷ��� ��ȯ getPerimeter()
//		- contains(double x, double y) ������ ��(x,y) �� ������ ���簢���� ���ο� ���� ���, true ��ȯ
//		- contains(const Rectangle2D &r) ������ ���簢���� ������ ���簢���� ���ο� ���� ���, true ��ȯ
//		- overlaps(const Rectangle2D &r) ������ ���簢���� ������ ���簢���� ��ø�Ǵ� ���, true ��ȯ
//		
//		Ŭ������ ���� UML ���̾�׷��� �׸���, Ŭ������ �����϶�
//
//		�� ���� rectangle2D ��ü r1(2,2,5.5,4.9), r2(4,5,10.5,3.2), r3(3,5,2.3,5.4)
//		r1 �� ������ �ѷ�, r1.contains(r2), r1.overlaps(r3) ���
//	*/
//	/*Rectangle2D r1({ 2, 2 }, { 5.5, 4.9 }), r2({ 4, 5 }, { 10.5, 3.2 }), r3({ 3, 5 }, { 2.3, 5.4 });
//
//	cout << "r1 ���� : " << r1.getArea() << endl << "r1 �ѷ� : " << r1.getPerimeter() << endl;
//	cout << boolalpha;
//	cout  << r1.contains(1, 1) << endl << r1.contains(r2) << endl << r1.overlaps(r3) << endl;*/
//
//	/*
//	Q2. x�� y ���� ���� ǥ���ϴ� MyPoint Ŭ������ �����϶�.
//		- ��ǥ�� ��Ÿ���� �� ���� x, y ������ �ʵ�
//		- ��(0,0) �� �����ϴ� ����Ʈ ������
//		- ���� ��ǥ�� ���� �����ϴ� ������
//		- x, y ������ �ʵ带 ���� ���� �� ���� get �Լ�
//		- MyPoiny ������ �� ������ �ٸ� �������� �Ÿ��� ��ȯ�ϴ� distance �Լ�
//
//		������ ���� UML ���̾�׷�
//
//		�� ���� �� (0,0) �� (10,30,5) �� �Ÿ��� ǥ���ϴ� ���α׷��� �ۼ�
//
//		��Ŭ ,���ʱ� constains �Լ� MyPoint ��ü�� ���ڷ� �ϴ� ������ �Լ�
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
//		cout << "���� ����� �����Ѵ�.\n";
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
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� �ʱ�ȭ : \n";
//		StringBad sailor = sports;
//		cout << "sailor: " << sailor << endl;
//		cout << "�ϳ��� ��ü�� �ٸ� ��ü�� ���� : \n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << endl;
//		cout << "�� ����� �������´�.\n";
//	}
//	cout << "main() �� ��\n";
//
//	return 0;
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "������ ���޵� StringBad:\n";
//	cout << "		\"" << rsb << "\"\n";
//}
//void callme2(StringBad sb)
//{
//	cout << "������ ���޵� StringBad:\n";
//	cout << "		\"" << sb << "\"\n";
//}
//
