//Name:呂欣怡
//Date:March 22,2022
//Last Update:March 22,2022
//Problem statement:Number Game.


#ifndef numberGame_H
#define numberGame_H

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;

class NumberGame {

public:
	void SetInput(int a);
	void ProcessInput();
	void SetFileName(string name);
	void LoadNumberList();
	void PrintAllValid();
	void Reset();

private:
	int A = 0;
	int seperate[1000];		//拆解的數字
	int count = 0;		// 看輸入為幾位數
	int E[10000];		//題目
	int countE = 0;		//看題目數量
	ifstream infile;
};
#endif 
