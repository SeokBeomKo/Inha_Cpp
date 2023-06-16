#include <iostream>
#include <cstring>
#include <vector>
#include <new>
#include "namesp.h"

using namespace std;

namespace pers
{
	void getPerson(Person& rp)
	{
		cout << "이름 입력 :";
		cin >> rp.fname;
		cout << "  성 입력 :";
		cin >> rp.lname;
	}
	void showPerson(const Person& rp)
	{
		cout << rp.lname << ", " << rp.fname;
	}
}
namespace debts
{
	void getDebt(Debt& rd)
	{
		getPerson(rd.name);
		cout << "부채 입력 : ";
		cin >> rd.amount;
	}
	void showDebt(const Debt& rd)
	{
		pers::showPerson(rd.name);
		cout << ": $" << rd.amount << endl;
	}
	double sumDebts(const Debt ar[], int n)
	{
		double total = 0;
		for (int i = 0; i < n; i++)
		{
			total += ar[i].amount;
		}
		return total;
	}
}