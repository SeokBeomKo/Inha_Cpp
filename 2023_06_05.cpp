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
//	// ���ƴ��� (�浹)
//	if (abs(a.pos.x - b.pos.x) <= (a.scale.x + b.scale.x) * 0.5f
//		&& abs(a.pos.y - b.pos.y) <= (a.scale.y + b.scale.y) * 0.5f)
//	{
//		// �ȿ� �ִ���
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
//	Q1. �� ���簢���� ���� �߽����� x��ǥ, y��ǥ, ��, ���̸� �Է¹޾� 
//	�� ��° ���簢���� ù ��° ���簢���� ���ο� �ִ���, ��ġ������ �����ϴ� ���α׷��� �ۼ��϶�
//	
//	ex )	ù ��° ���簢�� x, y, width, height : 1 2 3 5.5
//			�� ��° ���簢�� x, y, width, height : 3 4 4.5 5
//			�� ��° ���簢���� ù ��° �簢���� ���ƴ�
//	*/
//	/*Square a, b;
//	cout << "ù ��° ���簢�� x, y, width, height : ";
//	cin >> a.pos.x >> a.pos.y >> a.scale.x >> a.scale.y;
//	cout << "�� ��° ���簢�� x, y, width, height : ";
//	cin >> b.pos.x >> b.pos.y >> b.scale.x >> b.scale.y;
//
//	int check = Rect(a,b);
//
//	switch (check)
//	{
//	case 1:
//		cout << "�� ��° ���簢���� ù ��° ���簢���� ���ƴ�\n";
//		break;
//	case 2:
//		cout << "�� ��° ���簢���� ù ��° ���簢���ȿ� �ִ�\n";
//		break;
//	default:
//		cout << "�浹���� �ʾҽ��ϴ�.\n";
//		break;
//	}*/
//
//	/*double* pd1, *pd2;
//	int i;
//	cout << "new �� ��ġ ���� new �� ù ��° ȣ�� :\n";
//	pd1 = new double[N];
//	pd2 = new(buffer)double[N];
//
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//
//	cout << "�޸� �ּ� :\n" << pd1 << " : ��;		"
//		<< (void*)buffer << " : ����" << endl;
//	cout << "�޸� ���� :\n";
//
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "�� " << pd1[i] << ";	";
//		cout << &pd2[i] << "�� " << pd2[i] << endl;
//	}
//	cout << "\nnew�� ��ġ ���� new �� �� ��° ȣ�� : \n";
//
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new(buffer)double[N];
//
//	for (i = 0; i < N; i++)
//	{
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	}
//	cout << "�޸� ���� :\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd3[i] << "�� " << pd3[i] << ";	";
//		cout << &pd4[i] << "�� " << pd4[i] << endl;
//	}
//
//	cout << "\nnew�� ��ġ ���� new �� �� ��° ȣ�� : \n";
//	delete[] pd1;
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for (i = 0; i < N; i++)
//	{
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//	cout << "�޸� ���� :\n";
//	for (i = 0; i < N; i++)
//	{
//		cout << &pd1[i] << "�� " << pd1[i] << ";	";
//		cout << &pd2[i] << "�� " << pd2[i] << endl;
//	}
//	delete[] pd1;
//	delete[] pd3;*/
//
//	/*
//	Q2. �� ���� ���� �߽����� x��ǥ, y��ǥ, �������� �Է¹޾�
//	�� ��° ���� ù ��° ���� ���ο� �ִ���, ��ġ������ �����ϴ� ���α׷��� �ۼ��϶�
//
//	ex )	ù ��° �� x, y, r : 0.5 5.1 13
//			�� ��° �� x, y, r : 1 1.7 4.5
//			�� ��° ���� ù ��° ���� ���ƴ�
//	*/
//	/*Circle a, b;
//	cout << "ù ��° �� x, y, r : ";
//	cin >> a.pos.x >> a.pos.y >> a.scale;
//	cout << "�� ��° �� x, y, r : ";
//	cin >> b.pos.x >> b.pos.y >> b.scale;
//
//	int check = isCollisionCir(a, b);
//
//	switch (check)
//	{
//	case 1:
//		cout << "�� ��° ���� ù ��° ���� ���ƴ�\n";
//		break;
//	case 2:
//		cout << "�� ��° ���� ù ��° ���ȿ� �ִ�\n";
//		break;
//	default:
//		cout << "�浹���� �ʾҽ��ϴ�.\n";
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