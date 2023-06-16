#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount()
{
	this->name = "";
	this->acctnum = "";
	this->balance = 0;
}

BankAccount::BankAccount(const string client, const string num, double bal)
{
	this->name = client;
	this->acctnum = num;
	this->balance = bal;
}

BankAccount::~BankAccount()
{
}

void BankAccount::show(void) const
{
	cout << this->name << "�� ���� " << " ���� ��ȣ : " << this->acctnum << " �ܾ� : " << this->balance << endl;
}

void BankAccount::deposit(double cash)
{
	this->balance += cash;
	cout << cash << "�� �Ա� �� " << this->name << " �ܾ� : " << this->balance << endl;
}

void BankAccount::withdraw(double cash)
{
	if (this->balance < cash) 
	{
		cout << "�ܾ� ����\n";
		return;
	}
	this->balance -= cash;
	cout << cash << "�� ��� �� " << this->name << " �ܾ� : " << this->balance << endl;
}
