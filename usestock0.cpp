//#include <iostream>
//#include "stock00.h"
//
//#define MAX 100;
//
//int main()
//{
//	/*Stock fluffy_the_cat;
//	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(15, 18.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(400, 20.00);
//	fluffy_the_cat.show();
//	fluffy_the_cat.buy(300000, 40.125);
//	fluffy_the_cat.show();
//	fluffy_the_cat.sell(300000, 0.125);
//	fluffy_the_cat.show();*/
//	/*cout << "생성자를 사용하여 새로운 객체들을 생성한다.\n";
//	Stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	cout << "stock1을 stock2 에 대입한다.\n";
//	stock2 = stock1;
//	stock1.show();
//	stock2.show();
//
//	cout << "생성자를 사용하여 객체를 재설정한다.\n";
//	stock1 = Stock("Nifty Foods", 10, 50.0);
//	cout << "갱신된 stock1 : ";
//	stock1.show();
//	cout << "프로그램 종료\n";*/
//	/*
//	Q3. 학교에 100 개의 사물함과 100 명의 학생이 있다.
//	모든 사물함이 첫 날에는 닫혀 있다.
//	학생이 교실로 들어가면서
//
//		s1 이라는 첫 번째 학생은 모든 사물함을 연다.
//		s2 라는 두 번째 학생은 L2 부터 시작하여 1 개씩 건너 뛰면서 사물함을 닫는다.
//		s3 라는 세 번째 학생은 L3 부터 시작하여 2 개씩 건너 뛰면서 사물함의 상태를 변경한다.
//		s4 라는 네 번째 학생은 L4 부터 시작하여 3 개씩 건너 뛰면서 사물함의 상태를 변경한다.
//
//	학생 s100 이 L100 사물함을 변경할 때 까지 계속 된다.
//	모든 학생이 교실을 통과하고 난 다음, 어떤 사물함이 열려 있는지,
//	열려있는 모든 사물함의 번호를 출력하는 프로그램 작성
//	*/
//	const int max = 100;
//
//	bool L[max] = { false };
//	int s[max] = { 0 };
//	int i = 0, j = 0;
//
//	for (i = 0; i < max; i++)
//	{
//		if (i == 0)
//		{
//			for (j = 0; j < max; j++) 
//			{
//				L[j] = true;
//			}
//		}
//		else
//		{
//			for(j = i; j < max ; j += i+1)
//			{
//				L[j] = !L[j];
//			}
//		}
//	}
//
//	for (i = 0; i < max; i++)
//	{
//		if (L[i])
//		{
//			cout << i + 1 << " L " << L[i] << endl;
//		}
//	}
//
//
//	return 0;
//}
