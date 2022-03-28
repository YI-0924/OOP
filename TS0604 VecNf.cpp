//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 27,2022
//Problem statement:Dim Vector.

#include "VecNf.h"

//Construct a one - dimensional zero vector in default.
VecNf::VecNf()
{
	dimension = 1;
	value = new float[dimension] {0};
}

// Construct a cnt dimensional vector using the first cnt numbers in dest.
VecNf::VecNf(float* dest, int cnt)
{
	dimension = cnt;
	value = dest;
}

//Construct a new vector from a VecNf.
VecNf::VecNf(const VecNf& rhs)
{
	dimension = rhs.dimension;
	value = rhs.value;
}

float& VecNf::operator[](int i) 
{
	return value[i];
}

VecNf VecNf::operator=(VecNf v)
{
	cout << "ASSIGNMENT!!!" << endl;
	dimension = v.dimension;
	value = v.value;
	return *this;
}

VecNf VecNf::operator+(VecNf v)
{
	VecNf ans;
	if (dimension != v.dimension) {
		cout << "dimensions inconsistent" << endl;
		ans.dimension = 0;
		ans.value = new float[ans.dimension]{ 0 };
		return ans;
	}
	else {
		ans.dimension = dimension;
		ans.value = new float[ans.dimension]{ 0 };
		for (int i = 0; i < dimension; i++) {
			ans.value[i] = value[i] + v.value[i];
		}
		return ans;
	}
}

VecNf VecNf::operator-(VecNf v)
{
	VecNf ans;
	
	if (dimension != v.dimension) {
		cout << "dimensions inconsistent" << endl;
		ans.dimension = 0;
		ans.value = new float[ans.dimension]{ 0 };
		return ans;
	}
	else {
		ans.dimension = dimension;
		ans.value = new float[ans.dimension]{ 0 };
		for (int i = 0; i < dimension; i++) {
			ans.value[i] = value[i] - v.value[i];
		}
		return ans;
	}
}

float VecNf::operator*(VecNf v)
{
	float ans = 0;
	if (dimension != v.dimension) {
		cout << "dimensions inconsistent" << endl;
		return ans;
	}
	else {
		for (int i = 0; i < dimension; i++) {
			ans = ans + value[i] * v.value[i];
		}
		return ans;
	}
}

VecNf VecNf::operator*(float f)
{
	VecNf ans;
	ans.dimension = dimension;
	ans.value = new float[ans.dimension]{ 0 };
	for (int i = 0; i < dimension; i++) {
		ans.value[i] = value[i] * f;
	}
	return ans;
}

int VecNf::Size()
{
	return dimension;
}
