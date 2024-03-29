#include "pch.h"
#include "CreditCardAccount.h"
using namespace System;

int main(array<System::String ^> ^args)
{
	Console::WriteLine("Creating account object");
	CreditCardAccount^ account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	Console::WriteLine("\nMaking a purchase(300)");
	account1->MakePurchase(300);
	Console::WriteLine("\nMaking a purchase(700)");
	account1->MakePurchase(700);
	Console::WriteLine("\nMaking a purchase(500)");
	account1->MakePurchase(500);
	Console::WriteLine("\nReedemingPoints");
	account1->RedeemloyaltyPoints();

	//Console::Write("Card name is ");
	//Console::WriteLine(CreditCardAccount::name);
	//int n = CreditCardAccount::GetNumberOfAccounts();
	//Console::Write("Number of accounts initially: ");
	//Console::WriteLine(n);
	//Console::WriteLine("\nCreating first object");
	//CreditCardAccount^ account1;
	//account1 = gcnew CreditCardAccount(12345, 2000);
	//account1->MakePurchase(300);
	//account1->PrintStatement();
	//Console::WriteLine("\nCreating second object");
	//CreditCardAccount^ account2;
	//account2 = gcnew CreditCardAccount(67890, 5000);
	//account2->MakePurchase(300);
	//account2->PrintStatement();
	//n = CreditCardAccount::GetNumberOfAccounts();
	//Console::Write("\nNumber of account now: ");
	//Console::WriteLine(n);


	/*Console::WriteLine("Creating fisrt object");
	CreditCardAccount^ account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	account1->MakePurchase(300);
	account1->PrintStatement();
	Console::WriteLine("\nCreating second object");
	CreditCardAccount^ account2;
	account2 = gcnew CreditCardAccount(67890, 5000);
	account2->MakePurchase(750);
	account2->PrintStatement();*/
	//CreditCardAccount^ myAccount;
	//myAccount = gcnew CreditCardAccount(12345, 2500);
	//myAccount->SetCreditLimit(1000);
	//myAccount->MakePurchase(1000);
	//myAccount->MakeRepayment(700);
	//myAccount->PrintStatement();
	//long num = myAccount->GetAccountNumber();
	//Console::Write("Account number: ");
	//Console::WriteLine(num);
}
