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
//	/*cout << "�����ڸ� ����Ͽ� ���ο� ��ü���� �����Ѵ�.\n";
//	Stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	cout << "stock1�� stock2 �� �����Ѵ�.\n";
//	stock2 = stock1;
//	stock1.show();
//	stock2.show();
//
//	cout << "�����ڸ� ����Ͽ� ��ü�� �缳���Ѵ�.\n";
//	stock1 = Stock("Nifty Foods", 10, 50.0);
//	cout << "���ŵ� stock1 : ";
//	stock1.show();
//	cout << "���α׷� ����\n";*/
//	/*
//	Q3. �б��� 100 ���� �繰�԰� 100 ���� �л��� �ִ�.
//	��� �繰���� ù ������ ���� �ִ�.
//	�л��� ���Ƿ� ���鼭
//
//		s1 �̶�� ù ��° �л��� ��� �繰���� ����.
//		s2 ��� �� ��° �л��� L2 ���� �����Ͽ� 1 ���� �ǳ� �ٸ鼭 �繰���� �ݴ´�.
//		s3 ��� �� ��° �л��� L3 ���� �����Ͽ� 2 ���� �ǳ� �ٸ鼭 �繰���� ���¸� �����Ѵ�.
//		s4 ��� �� ��° �л��� L4 ���� �����Ͽ� 3 ���� �ǳ� �ٸ鼭 �繰���� ���¸� �����Ѵ�.
//
//	�л� s100 �� L100 �繰���� ������ �� ���� ��� �ȴ�.
//	��� �л��� ������ ����ϰ� �� ����, � �繰���� ���� �ִ���,
//	�����ִ� ��� �繰���� ��ȣ�� ����ϴ� ���α׷� �ۼ�
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
