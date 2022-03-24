//Name:呂欣怡
//Date:March 22,2022
//Last Update:March 22,2022
//Problem statement:Number Game.


#include"numberGame.h"


void NumberGame::SetInput(int a) // set the given integer A.
{
	A = a;
}
void NumberGame::ProcessInput() // splitting the integer A into several digits.
{
	int aTest = A;

	while (aTest > 0) {
		aTest /= 10;
		count++;
	}

	aTest = A;

	for (int i = count - 1; i >= 0; i--) {
		seperate[i] = aTest % 10;
		aTest /= 10;
	}
}
void NumberGame::SetFileName(string name) // set the file name of the file where list S is located.
{
	infile.open(name);
}
void NumberGame::LoadNumberList() // read list S from the file.
{
	while (infile >> E[countE]) {
		countE++;
	}
	infile.close();
}
void NumberGame::PrintAllValid() // print all the valid numbers in S ascendingly
{
	int whether1 = 0;
	for (int j = 0; j < count; j++) {
		if (seperate[j] == 1) {
			whether1 = 1;		//拆解的數字中有 1
			break;
		}
	}

	for (int i = 0; i <= countE; i++) {
		int chkNum = E[i];
		for (int j = count - 1; j >= 0 ; j--) {
			if (seperate[j] != 0  && chkNum != 1 && chkNum % seperate[j] == 0) {
				chkNum /= seperate[j];
			}
		}
		if(chkNum == 1 && whether1 == 1) {
				cout << E[i] << '\n';
		}
		else if (chkNum == 1 && whether1 != 1) {
			if (E[i] == 1) {
				continue;
			}
			cout << E[i] << "\n";
		}
	}
}
void NumberGame::Reset() // reset all variables.
{
	A = 0;
	count = 0;		
	countE = 0;
}
