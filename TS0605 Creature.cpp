//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 29,2022
//Problem statement:Observation diary.

#include"Creature.h"
#include"Diary.h"

//Contains a creature named name.
Creature::Creature(string name)
{
	creatureName = name;
	dayIndex = Diary::logList.size() - 1;
}

//A creature that contains the same information as the base of each body part.
Creature::Creature(string name, Creature& base)
{
	creatureName = name;
	bodyPartMap = base.bodyPartMap;
	dayIndex = Diary::logList.size() - 1;
}

//For example: c["leg"]: return to the body part of Creature c named "leg".
Creature& Creature::operator[](string name)
{
	auto it = bodyPartMap.find(name);
	if (it != bodyPartMap.end()) {
		itMap = it;
		return *this;
	}
	bodyPartMap[name] = 0;
	itMap = bodyPartMap.find(name);
	return *this;
}

//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
//and record "sample's leg appeared (0 -> 3)" in the log. 
Creature& Creature::operator=(const int& num)
{
	int preNum = itMap->second;
	int curNum = num;
	if (curNum >= 0) {
		itMap->second = num;
		makeLog(preNum, curNum);
	}
	return *this;
}

//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2,
//so the number of body parts named "leg" becomes 5.
//And please record "sample's leg increased (3 -> 5)" in the log.
Creature& Creature::operator+=(const int& num)
{
	int preNum = itMap->second;
	int curNum = preNum + num;
	if (curNum >= 0) {
		itMap->second = num;
		makeLog(preNum, curNum);
	}
	return *this;
}

//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2, 
//so the number of body parts named "leg" becomes 3.
//And please record "sample's leg decreased (5 -> 3)" in the log.
Creature& Creature::operator-=(const int& num)
{
	int preNum = itMap->second;
	int curNum = preNum - num;
	if (curNum >= 0) {
		itMap->second = num;
		makeLog(preNum, curNum);
	}
	return *this;
}


void Creature::makeLog(int preNum, int curNum)
{
	string change, strPreNum, strCurNum;
	if (preNum < 0 && curNum < 0) {
		return;
	}
	if (preNum == 0 && curNum > preNum) {
		change == "appeared";
	}
	else if (curNum > preNum) {
		change == "increased";
	}
	else if (curNum < preNum) {
		change == "decreased";
	}
	else {
		return;
	}

	stringstream ss;
	ss << preNum;
	ss >> strPreNum;
	ss.str("");
	ss.clear();
	ss << curNum;
	ss >> strCurNum;

	string content = " ";
	content += creatureName + "'s" + itMap->first + " ";
	content += change + " (" + strPreNum + " -> " + strCurNum + ").";
	Diary::recordLog(creatureName, content);
}

//Prints the value of each body part of the organism.
void Creature::PrintStatus()
{
	cout << creatureName << " 's status:" << endl;
	for (auto it = bodyPartMap.begin(); it != bodyPartMap.end(); it++) {
		if (it->second) {
			cout << it->first << " * " << it->second << endl;
		}
		cout << endl;
	}
}

//Prints the log information of the creature on a Diary basis since it was collected.
void Creature::PrintLog()
{
	cout << creatureName << " 's log:" << endl;
	for (int i = dayIndex; i < Diary::logList.size(); i++) {
		cout << "Day " << Diary::logList[i].date << endl;
		for (int j = 0; j != Diary::logList[i].content.size(); j++) {
			if (Diary::logList[i].content[j].name == creatureName) {
				cout << Diary::logList[i].content[j].log << endl;
			}
		}
	}
	cout << endl;
}

//destructor
Creature::~Creature() 
{
}
