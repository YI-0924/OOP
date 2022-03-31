//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 29,2022
//Problem statement:Observation diary.

#include"Diary.h"
#include<map>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;


class Creature {
public:
	string creatureName;
	int dayIndex;
	map<string, int> bodyPartMap;
	map<string, int>::iterator itMap;

	//Contains a creature named name.
	Creature(string name);

	//A creature that contains the same information as the base of each body part.
	Creature(string name, Creature& base);

	//destructor
	~Creature();

	//For example: c["leg"]: return to the body part of Creature c named "leg".
	Creature& operator[](string name);

	//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
	//and record "sample's leg appeared (0 -> 3)" in the log. 
	Creature& operator=(const int& num);

	//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2,
	//so the number of body parts named "leg" becomes 5.
	//And please record "sample's leg increased (3 -> 5)" in the log.
	Creature& operator+=(const int& num);

	//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2, 
	//so the number of body parts named "leg" becomes 3.
	//And please record "sample's leg decreased (5 -> 3)" in the log.
	Creature& operator-=(const int& num);

	void makeLog(int preNum, int curNum);

	//Prints the value of each body part of the organism.
	void PrintStatus();

	//Prints the log information of the creature on a Diary basis since it was collected.
	void PrintLog(); 
};
