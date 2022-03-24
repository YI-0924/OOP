//Name:呂欣怡
//Date:March 22,2022
//Last Update:March 22,2022
//Problem statement:Number Game.


#include <iostream>
#include "numberGame.h"

using namespace std;

int main() {

	NumberGame Game;
	Game.SetInput(1234);
	Game.ProcessInput();
	Game.SetFileName("number.txt");
	Game.LoadNumberList();
	Game.PrintAllValid();

	Game.Reset();
	cout << "\n";
	Game.SetInput(2345);
	Game.ProcessInput();
	Game.SetFileName("number.txt");
	Game.LoadNumberList();
	Game.PrintAllValid();
	

}
