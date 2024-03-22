#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Carte
{
	unsigned nr_pagini;
	unsigned anul_publicarii;
	char autor[20];
	char numele_cartii[20];
};
class Book
{
private:
	unsigned nr_pagini;
	unsigned anul_publicarii;
	char autor[20];
	char numele_cartii[20];
public:
	Book(unsigned nr_pagini1, unsigned anul_publicarii1, char* aut1, char* num1)
	{
		nr_pagini = nr_pagini1;
		anul_publicarii= anul_publicarii1;
		strcpy_s(autor, 20, aut1);
		strcpy_s(numele_cartii, 20, num1);
	}
	Book() {}
	unsigned arata_nr_pagini() { return this->nr_pagini; }
	char* arata_numele_cartii() { return this->numele_cartii; }
};
int main()
{
	{
		Book myBook(300, 2022, "Popa Ion", "Exemplu");

		cout << "Nr de pagini: " << myBook.arata_nr_pagini() << endl;
		cout << "Titlu: " << myBook.arata_numele_cartii() << endl;

		return 0;
	}
}