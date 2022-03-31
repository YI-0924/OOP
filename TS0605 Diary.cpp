//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 29,2022
//Problem statement:Observation diary.

#include"Diary.h"

vector<dateLog> Diary::logList;

//Set the current date code(A string of words.May not all necessarily be numbers.)
void Diary::NewDay(string day)
{
	dateLog newDay;
	newDay.date = day;
	logList.push_back(newDay);
}

void Diary::recordLog(string inName, string inContent) 
{
	logData nameLog;
	nameLog.name = inName;
	nameLog.log = inContent;
	logList[logList.size() - 1].content.push_back(nameLog);
}
