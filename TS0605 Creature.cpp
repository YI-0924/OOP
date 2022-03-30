//Name:呂欣怡
//Date:March 27,2022
//Last Update:March 29,2022
//Problem statement:Observation diary.

#include"Creature.h"

//Contains a creature named name.
Creature::Creature(string name)
{
	creatureName = name;
}

//A creature that contains the same information as the base of each body part.
Creature::Creature(string name, Creature base)
{
	creatureName = name;
	bodyPartName = base.bodyPartName;
	bodyPartNum = base.bodyPartNum;
	count = base.count;
}

//For example: c["leg"]: return to the body part of Creature c named "leg".
Creature Creature::operator[](string name)
{
	bodyPartName[count] = name;
	return *this;
}

//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
//and record "sample's leg appeared (0 -> 3)" in the log. 
Creature Creature::operator=(int num)
{
	bodyPartNum[count] = num;
	return *this;
}

//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2,
//so the number of body parts named "leg" becomes 5.
//And please record "sample's leg increased (3 -> 5)" in the log.
Creature Creature::operator+=(int num)
{
	bodyPartNum[count] += num;
	return *this;
}

//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2, 
//so the number of body parts named "leg" becomes 3.
//And please record "sample's leg decreased (5 -> 3)" in the log.
Creature Creature::operator-=(int num)
{
	bodyPartNum -= num;
	return *this;
}



//Prints the value of each body part of the organism.
void Creature::PrintStatus()
{
	cout << creatureName << "'s status:\n";
	for (int i = 0; i < count; i++) {
		cout << bodyPartName[i] << "*" << bodyPartNum[i] << endl;
	}
}

//Prints the log information of the creature on a Diary basis since it was collected.
void Creature::PrintLog()
{

}
