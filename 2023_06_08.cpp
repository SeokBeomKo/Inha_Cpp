//#include <iostream>
//#include <string>
//#include <vector>
//#include <time.h>
//#include <stdlib.h>
////#include "Student.h"
//#include "stock20.h"
//#include "BankAccount.h"
//#include "Move.h"
//
//using namespace std;
//
//struct Point
//{
//	double x;
//	double y;
//};
//
//struct Line
//{
//	Point pt1;
//	Point pt2;
//};
//
//void CCW(Line line, Point pot);
//
//const int STKS = 4;
//const int BAS = 3;
//
//int main()
//{
//	/*
//	�� p0(x0,y0) �κ��� �� p1(x1,y1) ������ ������ �־����� �� �� p2(x2,y2) �� ���� ���� �Ǵ� �����ʿ� �ִ��� �Ǵ��� �� �ִ�.
//
//	��p0,p1,p2 �� �Է¹޾� �� p2�� ��� ��ġ�ϴ��� �Ǵ��ϴ� ���α׷��� �ۼ��϶�
//	ex > p0, p1, p2 : 4.4 2 6.5 9.5 -5.4
//		p2�� ���� ���ʿ� �ִ�.
//	*/
//	/*Line line;
//	Point pot;
//
//	while (true)
//	{
//		cout << "���� ù ��° ����Ʈ��ǥ �Է� : ";
//		cin >> line.pt1.x >> line.pt1.y;
//		cout << "���� �� ��° ����Ʈ��ǥ �Է� : ";
//		cin >> line.pt2.x >> line.pt2.y;
//		cout << "���� ����Ʈ ��ǥ �Է� : ";
//		cin >> pot.x >> pot.y;
//
//		CCW(line, pot);
//	}*/
//
//	/*
//	Q2. ������ �� �ܾ �����ϰ� ����ڰ� �� ����
//	�� ���ڸ��� �����ϵ��� �ؼ� �ܾ ���ߴ� ����
//	�ܾ��� �� ���ڴ� '*'���� ǥ�õȴ�.
//	����ڰ� �ùٸ� ������ ���� ���� ���� ���ڰ� ȭ�鿡 ǥ�õȴ�.
//	����ڰ� �ܾ� ���߱⸦ ������ �� �Ǽ��� Ƚ���� ǥ���ϰ�
//	�ٸ� �ܾ�� ����� �������� ������ �Ѵ�.
//	*/
//	/*vector<string> strList = { "apple", "banana", "carrot" };
//	string quiz;
//	char a;
//	int i, miss = 0, suc = 0, redu = 0, strsize =0;
//
//	while (true)
//	{
//		i = 0;
//		cout << "���ӽ��� : 1, �������� : 0\n";
//		cin >> i;
//		if (!i) break;
//
//		srand(time(NULL));
//		quiz = strList[rand() % 3];
//		string res(quiz.length(), '*');
//		strsize = quiz.length();
//		miss = 0;
//
//		while (true)
//		{
//			suc = 0;
//			redu = 0;
//			cout << "�Է� :";
//			cin >> a;
//
//			for (i = 0; i < strsize; i++)
//			{
//				if (res[i] == a)
//				{
//					redu++;
//				}
//			}
//			if (redu != 0)
//			{
//				cout << a << "�� �̹� �ܾ ���ԵǾ� �ֽ��ϴ�.\n";
//				continue;
//			}
//
//			for (i = 0; i < strsize; i++)
//			{
//				if (quiz[i] == a)
//				{
//					res[i] = quiz[i];
//					suc++;
//				}
//			}
//			if (suc == 0)
//			{
//				cout << a << "�� �ܾ �����ϴ�.\n";
//				miss++;
//			}
//
//			cout << res << endl;
//
//			if (quiz == res)
//			{
//				cout << miss << "�� ���� " << quiz << endl;
//				break;
//			}
//		}
//	}*/
//
//	/*Stock stocks[STKS] = {
//		Stock("NanoSmart",12,20.0),
//		Stock("Boffo Objects",200 ,2.0),
//		Stock("Monolithic Obelisks",130 ,3.25),
//		Stock("Fleep Enterprises",60 ,6.5)
//	};
//
//	cout << "���� �ֽ� ����Ʈ\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//	{
//		stocks[st].show();
//	}
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//	{
//		top = &top->topval(stocks[st]);
//	}
//
//	cout << "\n�ְ� ��ġ�� �ֽ�:\n";
//	top->show();*/
//
//	/*BankAccount accounts[BAS] = {
//		BankAccount("ABC","12345678910",1000),
//		BankAccount("DEF","11121314151",5000),
//		BankAccount("GHI","61718192021",10000)
//	};
//
//	for(BankAccount a : accounts)
//	{
//		a.show();
//	}
//	accounts[0].deposit(1000);
//	for (BankAccount a : accounts)
//	{
//		a.show();
//	}
//	accounts[1].withdraw(2000);
//	for (BankAccount a : accounts)
//	{
//		a.show();
//	}
//	accounts[0].withdraw(100000);*/
//
//	/*Move a;
//	Move temp(1.5, 1.5);
//	a.showMove();
//	a = a.add(temp);
//	a.showMove();
//	a.reset(10,10);
//	a.showMove();*/
//
//	return 0;
//}
//
//void CCW(Line line, Point pot)
//{
//	int a = (line.pt2.x - line.pt1.x) * (pot.y - line.pt1.y) - (pot.x - line.pt1.x) * (line.pt2.y - line.pt1.y);
//	if (a > 0)
//	{
//		cout << "���� ���ʿ� �ִ�.\n";
//	}
//	else if (a == 0)
//	{
//		cout << "���� �ִ�.\n";
//	}
//	else
//	{
//		cout << "���� �����ʿ� �ִ�.\n";
//	}
//}