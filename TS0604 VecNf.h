//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 27,2022
//Problem statement:Dim Vector.

#include<iostream>

using namespace std;


class VecNf {
public:
	int dimension;
	float* value;

	VecNf();		//Construct a one - dimensional zero vector in default.
	VecNf(float* dest, int cnt);		// Construct a cnt dimensional vector using the first cnt  numbers in dest.
	VecNf(const VecNf& rhs);		//Construct a new vector from a VecNf.

	float& operator[](int i);
	VecNf operator=(VecNf v);
	VecNf operator+(VecNf v);
	VecNf operator-(VecNf v);
	float operator*(VecNf v);
	VecNf operator*(float f);

	int Size();


};
