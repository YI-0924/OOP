//Name:呂欣怡
//Date:March 24,2022
//Last Update:March 24,2022
//Problem statement:Prime Number.

#include <iostream>

using namespace std;

class PrimeNumber {
public:
	int value;
	int get();
	PrimeNumber();
	PrimeNumber(int _value);
	PrimeNumber & operator++();
	PrimeNumber operator++(int input);
	PrimeNumber & operator--();
	PrimeNumber operator--(int input);

};
