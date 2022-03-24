//Name:呂欣怡
//Date:March 24,2022
//Last Update:March 24,2022
//Problem statement:Prime Number.

#include "PrimeNumber.h"

//return the value of this PrimeNumber.
int PrimeNumber::get() 
{
	return value;
}

//construct a PrimeNumber where the value is 1.
PrimeNumber::PrimeNumber() 
{
	value = 1;
}

// construct a PrimeNumber where the value is _value.
PrimeNumber::PrimeNumber(int _value)
{
	value = _value;
}

PrimeNumber& PrimeNumber::operator++()
{
	value++;
	return *this;
}

//return the next larger prime number.
PrimeNumber PrimeNumber::operator++(int input)
{
	if (value == 1) {
		return 1;
	}
	else if (value == 2) {
		return 2;
	}
	bool prime;
	do 
	{
		prime = true;
		for (int j = 2; j <= value / 2; j++) {
			if (value % j == 0) {
				prime = false;
				continue;
			}
		}
		if (prime == true) {
			return value;
		}
		value += 1;
	} 
	while (prime != true);
}

PrimeNumber& PrimeNumber::operator--()
{
	value--;
	return *this;
}

//return the next smaller prime number.
//If the PrimeNumber value equals to 2, -- operator should return 1. 
//In the testing data, the PrimeNumber won’t be less than 2.
PrimeNumber PrimeNumber::operator--(int input)
{
	if (value == 1) {
		return 1;
	}
	else if (value == 2) {
		return 2;
	}

	bool prime;
	do
	{
		prime = true;
		for (int j = 2; j <= value / 2; j++) {
			if (value % j == 0) {
				prime = false;
				continue;
			}
		}
		if (prime == true) {
			return value;
		}
		value -= 1;
	} while (prime != true);
}
