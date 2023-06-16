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
	cout << this->name << "ÀÇ Á¤º¸ " << " °èÁÂ ¹øÈ£ : " << this->acctnum << " ÀÜ¾× : " << this->balance << endl;
}

void BankAccount::deposit(double cash)
{
	this->balance += cash;
	cout << cash << "¿ø ÀÔ±Ý ÈÄ " << this->name << " ÀÜ¾× : " << this->balance << endl;
}

void BankAccount::withdraw(double cash)
{
	if (this->balance < cash) 
	{
		cout << "ÀÜ¾× ºÎÁ·\n";
		return;
	}
	this->balance -= cash;
	cout << cash << "¿ø Ãâ±Ý ÈÄ " << this->name << " ÀÜ¾× : " << this->balance << endl;
}
