//Name:呂欣怡
//Date:March 24,2022
//Last Update:March 24,2022
//Problem statement:Prime Number.

#include "PrimeNumber.h"
#include <iostream>

using namespace std;

int main()
{	
	PrimeNumber p1, p2(13);	
	PrimeNumber a = ++p1;
	PrimeNumber b = p2++;
	cout << a.get() << endl;
	cout << p1.get() << endl;
	cout << b.get() << endl;
	cout << p2.get() << endl;
	//system("pause");
	return 0;
}
