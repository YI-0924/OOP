//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 27,2022
//Problem statement:Observation diary.

#include<iostream>

using namespace std;

class Creature {
public:
	string creatureName;
	int bodyPartNum;
	string bodyPartName;

	//Contains a creature named name.
	Creature(string name);

	//A creature that contains the same information as the base of each body part.
	Creature(string name, Creature base);



	//For example: c["leg"]: return to the body part of Creature c named "leg".
	string operator[](Creature c);

	//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
	//and record "sample's leg appeared (0 -> 3)" in the log. 
	int operator=(Creature c);

	//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2,
	//so the number of body parts named "leg" becomes 5.
	//And please record "sample's leg increased (3 -> 5)" in the log.
	int operator+=(Creature c);

	//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2, 
	//so the number of body parts named "leg" becomes 3.
	//And please record "sample's leg decreased (5 -> 3)" in the log.
	int operator-=(Creature c);



	//Prints the value of each body part of the organism.
	void PrintStatus();

	//Prints the log information of the creature on a Diary basis since it was collected.
	void PrintLog(); 
};
