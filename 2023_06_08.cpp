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
//	점 p0(x0,y0) 로부터 점 p1(x1,y1) 까지의 직선이 주어졌을 때 점 p2(x2,y2) 가 선의 왼쪽 또는 오른쪽에 있는지 판단할 수 있다.
//
//	점p0,p1,p2 를 입력받아 점 p2가 어디에 위치하는지 판단하는 프로그램을 작성하라
//	ex > p0, p1, p2 : 4.4 2 6.5 9.5 -5.4
//		p2는 선의 왼쪽에 있다.
//	*/
//	/*Line line;
//	Point pot;
//
//	while (true)
//	{
//		cout << "선의 첫 번째 포인트좌표 입력 : ";
//		cin >> line.pt1.x >> line.pt1.y;
//		cout << "선의 두 번째 포인트좌표 입력 : ";
//		cin >> line.pt2.x >> line.pt2.y;
//		cout << "점의 포인트 좌표 입력 : ";
//		cin >> pot.x >> pot.y;
//
//		CCW(line, pot);
//	}*/
//
//	/*
//	Q2. 임의의 한 단어를 생성하고 사용자가 한 번에
//	한 문자만을 추측하도록 해서 단어를 맞추는 게임
//	단어의 각 문자는 '*'으로 표시된다.
//	사용자가 올바른 추측을 했을 때는 실제 문자가 화면에 표시된다.
//	사용자가 단어 맞추기를 끝냈을 때 실수한 횟수를 표시하고
//	다른 단어로 계속할 것인지를 묻도록 한다.
//	*/
//	/*vector<string> strList = { "apple", "banana", "carrot" };
//	string quiz;
//	char a;
//	int i, miss = 0, suc = 0, redu = 0, strsize =0;
//
//	while (true)
//	{
//		i = 0;
//		cout << "게임시작 : 1, 게임종료 : 0\n";
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
//			cout << "입력 :";
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
//				cout << a << "는 이미 단어에 포함되어 있습니다.\n";
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
//				cout << a << "는 단어에 없습니다.\n";
//				miss++;
//			}
//
//			cout << res << endl;
//
//			if (quiz == res)
//			{
//				cout << miss << "번 실패 " << quiz << endl;
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
//	cout << "보유 주식 리스트\n";
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
//	cout << "\n최고 가치의 주식:\n";
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
//		cout << "선의 왼쪽에 있다.\n";
//	}
//	else if (a == 0)
//	{
//		cout << "선상에 있다.\n";
//	}
//	else
//	{
//		cout << "선의 오른쪽에 있다.\n";
//	}
//}