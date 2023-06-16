//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <new>
//#include "namesp.h"
//
//using namespace std;
//
//struct Point
//{
//	double x;
//	double y;
//};
//struct Square
//{
//	Point pos;
//	Point scale;
//};
//struct Circle
//{
//	Point pos;
//	double scale;
//};
//int Rect(Square a, Square b)
//{
//	// 겹쳤는지 (충돌)
//	if (abs(a.pos.x - b.pos.x) <= (a.scale.x + b.scale.x) * 0.5f
//		&& abs(a.pos.y - b.pos.y) <= (a.scale.y + b.scale.y) * 0.5f)
//	{
//		// 안에 있는지
//		if ((a.pos.x + a.scale.x * 0.5f) >= (b.pos.x + b.scale.x * 0.5f) &&
//			(a.pos.x - a.scale.x * 0.5f) <= (b.pos.x - b.scale.x * 0.5f) &&
//			(a.pos.y + a.scale.y * 0.5f) >= (b.pos.y + b.scale.y * 0.5f) &&
//			(a.pos.y - a.scale.y * 0.5f) <= (b.pos.y - b.scale.y * 0.5f))
//		{
//			return 2;
//		}
//		return 1;
//	}
//	return 0;
//}
//
//int isCollisionCir(Circle a, Circle b)
//{
//	double dis = sqrt(pow(a.pos.x - b.pos.x, 2) + pow(a.pos.y - b.pos.y, 2));
//	if (dis <= (a.scale + b.scale) * 0.5f)
//	{
//		if (abs(dis + b.scale * 0.5f) <= a.scale * 0.5f)
//		{
//			return 2;
//		}
//		return 1;
//	}
//	return 0;
//}
//
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF];
//
//
//
//int main()
//{
//	/*
//	Q1. 두 직사각형에 대해 중심점이 x좌표, y좌표, 폭, 높이를 입력받아 
//	두 번째 직사각형이 첫 번째 직사각형의 내부에 있는지, 겹치는지를 결정하는 프로그램을 작성하라
//	
//	ex )	첫 번째 직사각형 x, y, width, height : 1 2 3 5.5
//			두 번째 직사각형 x, y, width, height : 3 4 4.5 5
//			두 번째 직사각형은 첫 번째 사각형과 겹쳤다
//	*/
//	/*Square a, b;
//	cout << "첫 번째 직사각형 x, y, width, height : ";
//	cin >> a.pos.x >> a.pos.y >> a.scale.x >> a.scale.y;
//	cout << "두 번째 직사각형 x, y, width, height : ";
//	cin >> b.pos.x >> b.pos.y >> b.scale.x >> b.scale.y;
//
//	int check = Rect(a,b);
//
//	switch (check)
//	{
//	case 1:
//		cout << "두 번째 직사각형은 첫 번째 직사각형과 겹쳤다\n";
//		break;
//	case 2:
//		cout << "두 번째 직사각형은 첫 번째 직사각형안에 있다\n";
//		break;
//	default:
//		cout << "충돌하지 않았습니다.\n";
//		break;
//	}*/
//
//	/*double* pd1, *pd2;
//	int i;
//	cout << "new 와 위치 지정 new 의 첫 번째 호출 :\n";
//	pd1 = new double[N];
//	pd2 = new(buffer)double[N];
//
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//
//	cout << "메모리 주소 :\n" << pd1 << " : 힙;		"
//		<< (void*)buffer << " : 정적" << endl;
//	cout << "메모리 내용 :\n";
//
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "에 " << pd1[i] << ";	";
//		cout << &pd2[i] << "에 " << pd2[i] << endl;
//	}
//	cout << "\nnew와 위치 지정 new 의 두 번째 호출 : \n";
//
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new(buffer)double[N];
//
//	for (i = 0; i < N; i++)
//	{
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	}
//	cout << "메모리 내용 :\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd3[i] << "에 " << pd3[i] << ";	";
//		cout << &pd4[i] << "에 " << pd4[i] << endl;
//	}
//
//	cout << "\nnew와 위치 지정 new 의 세 번째 호출 : \n";
//	delete[] pd1;
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//	cout << "메모리 내용 :\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "에 " << pd1[i] << ";	";
//		cout << &pd2[i] << "에 " << pd2[i] << endl;
//	}
//	delete[] pd1;
//	delete[] pd3;*/
//
//	/*
//	Q2. 두 원에 대해 중심점이 x좌표, y좌표, 반지름을 입력받아
//	두 번째 원이 첫 번째 원의 내부에 있는지, 겹치는지를 결정하는 프로그램을 작성하라
//
//	ex )	첫 번째 원 x, y, r : 0.5 5.1 13
//			두 번째 원 x, y, r : 1 1.7 4.5
//			두 번째 원은 첫 번째 원과 겹쳤다
//	*/
//	/*Circle a, b;
//	cout << "첫 번째 원 x, y, r : ";
//	cin >> a.pos.x >> a.pos.y >> a.scale;
//	cout << "두 번째 원 x, y, r : ";
//	cin >> b.pos.x >> b.pos.y >> b.scale;
//
//	int check = isCollisionCir(a, b);
//
//	switch (check)
//	{
//	case 1:
//		cout << "두 번째 원은 첫 번째 원과 겹쳤다\n";
//		break;
//	case 2:
//		cout << "두 번째 원은 첫 번째 원안에 있다\n";
//		break;
//	default:
//		cout << "충돌하지 않았습니다.\n";
//		break;
//	}*/
//
//	int a;
//
//
//
//
//
//
//	return 0;
//}