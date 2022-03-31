//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 29,2022
//Problem statement:Observation diary.

#include<iostream>
#include<vector>

using namespace std;

typedef struct logData {
	string name;
	string log;
}logData;

typedef struct dateLog {
	string date;
	vector<logData> content;
}dateLog;

class Diary {
public:
	static vector<dateLog> logList;

	//Set the current date code(A string of words.May not all necessarily be numbers.)
	static void NewDay(string day);

	static void recordLog(string inName, string inContent);
};



