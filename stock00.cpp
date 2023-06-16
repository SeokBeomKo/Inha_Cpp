#include "stock00.h"
#include <iostream>
#ifndef STOCK00_H_
#define STOCK00_H_
void Stock::set_tot()
{
	total_val = shares * share_val;
}

Stock::Stock()
{
	cout << "디폴트 생성자 호출\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const string& co, long n, double pr)
{
	cout << co << "를 사용하는 생성자가 호출되었습니다.\n";
	company = co;
	if (n < 0)
	{
		cerr << "주식 수는 음수가 될 수 없으므로, "
			<< company << " shares 를 0으로 설정합니다.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	cout << "안녕, " << company << "!\n";
}

void Stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "주식 수는 음수가 될 수 없으므로, " << company << " shares 를 0으로 설정합니다. \n";
		shares = 0;
	}
	else
	{
		shares = n;
		share_val = pr;
		set_tot();
	}
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "매입 주식 수는 음수가 될 수 없으므로, " << "거래가 취소되었습니다.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "매도 주식 수는 음수가 될 수 없으므로, " << "거래가 취소되었습니다.\n";
	}
	else if (num > shares)
	{
		cout << "보유 주식보다 많은 주식을 매도할 수 없으므로, " << "거래가 취소되었습니다.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout << "회사명 : " << company
		<< " 주식 수 : " << shares << '\n'
		<< " 주가 : $" << share_val
		<< " 주식 총 가치 : $" << total_val << '\n';
}
#endif