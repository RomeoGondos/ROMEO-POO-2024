
#pragma once
#include "pch.h"
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	literal System::String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	void RedeemloyaltyPoints();
private:
	LoyaltyScheme^ scheme;
	static double interestRate;
	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
};

//CreditCardAccount::CreditCardAccount()
//{
//	accountNumber = 1234;
//	currentBalance = 0;
//	creditLimit = 3000;
//}