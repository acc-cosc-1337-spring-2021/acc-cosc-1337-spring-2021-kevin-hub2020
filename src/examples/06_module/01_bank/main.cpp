#include<iostream>
using std::cout;
#include "bank_account.h"

int main()
{
	BankAccount account;//variable - an instance of BankAccount object
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}