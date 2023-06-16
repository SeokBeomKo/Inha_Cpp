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
	cout << "����Ʈ ������ ȣ��\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const string& co, long n, double pr)
{
	cout << co << "�� ����ϴ� �����ڰ� ȣ��Ǿ����ϴ�.\n";
	company = co;
	if (n < 0)
	{
		cerr << "�ֽ� ���� ������ �� �� �����Ƿ�, "
			<< company << " shares �� 0���� �����մϴ�.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	cout << "�ȳ�, " << company << "!\n";
}

void Stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		cout << "�ֽ� ���� ������ �� �� �����Ƿ�, " << company << " shares �� 0���� �����մϴ�. \n";
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
		cout << "���� �ֽ� ���� ������ �� �� �����Ƿ�, " << "�ŷ��� ��ҵǾ����ϴ�.\n";
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
		cout << "�ŵ� �ֽ� ���� ������ �� �� �����Ƿ�, " << "�ŷ��� ��ҵǾ����ϴ�.\n";
	}
	else if (num > shares)
	{
		cout << "���� �ֽĺ��� ���� �ֽ��� �ŵ��� �� �����Ƿ�, " << "�ŷ��� ��ҵǾ����ϴ�.\n";
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
	cout << "ȸ��� : " << company
		<< " �ֽ� �� : " << shares << '\n'
		<< " �ְ� : $" << share_val
		<< " �ֽ� �� ��ġ : $" << total_val << '\n';
}
#endif