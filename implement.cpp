#include<iostream>
#include <vector>
#include "implement.h"
using std::string;
using std::endl;
#include <string.h>



/*
Default constructor
*/
sithSim::sithSim() 
{
	playerAlive = true;
	playerSkill = 0;
	playerSkillSwap = 0;
}



/*
Function definition to pass by pointer and swap power levels
*/
void sithSim::swapPowerLevel(int* jedi, int* sith)
{
	int c = *jedi;
	*jedi = *sith;
	*sith = c;
}


/*
Function definition to pass by reference and select a force power
*/
void::sithSim::getForcePower(int &x)
{
	int temp;
	temp = x; /* save the value of x */
	srand(time(0));
	switch (rand() % temp)
	{
	case 0: cout << endl << "Force lightning used.\n"; break;
	case 1: cout << endl << "Force scream used.\n"; break;
	case 2: cout << endl << "Force choke used.\n"; break;
	case 3: cout << endl << "Alter reality used.\n"; break;
	case 4: cout << endl << "Drain aura used.\n"; break;
	case 5: cout << endl << "Force destruction used.\n"; break;
	case 6: cout << endl << "Force drain used.\n"; break;
	case 7: cout << endl << "Force phantom used.\n"; break;
	}

	
}

/*
Function definition to pass by value to get lightsaber form
*/
void::sithSim::getLightsaberForm(int x)
{
	int temp;

	temp = x; /* save the value of x */
	srand(time(0));
	switch (rand() % x)
	{
	case 0: cout << endl << "Shii-Cho lightsaber form used.\n"; break;
	case 1: cout << endl << "Makashi lightsaber form used.\n"; break;
	case 2: cout << endl << "Soresu lightsaber form used.\n"; break;
	case 3: cout << endl << "Ataru lightsaber form used.\n"; break;
	case 4: cout << endl << "Shien lightsaber form used.\n"; break;
	case 5: cout << endl << "Djem So lightsaber form used.\n"; break;
	case 6: cout << endl << "Niman lightsaber form used.\n"; break;
	case 7: cout << endl << "Juyo lightsaber form used.\n"; break;
	case 8: cout << endl << "Vaapad lightsaber form used.\n"; break;
	}
}

/*
Function to create a random Jedi encounter
*/
int sithSim::jediCreate()
{
	srand(time(0));
	switch (rand() % 4)
	{
		case 0:
		{
			srand(time(0));
			int j1 = rand() % 100;
			//cout << "case 0: "<<"Jedi Level: " << j1 << " \n";
			jediNameCreate(); cout << ": Only sith deal in absolutes.\n"; 
			return j1;
		}

		case 1:
		{	
			srand(time(0));
			int j2 = rand() % 70;
			//cout << "case 1 " << "Jedi Level: " << j2 << " \n";
			jediNameCreate(); cout << ": I have the higher ground! Don't try it " << playerName << "!!" << endl;
			return j2;
		}

		case 2:
		{
			srand(time(0));
			int j3 = rand() % 50;
			//cout << "case 2 " << "Jedi Level: " << j3 << " \n";
			jediNameCreate(); cout << ": Don't give in to hate. That leads to the Dark Side.\n"; 
			return j3;
		}

		case 3:
		{
			srand(time(0));
			int j4 = rand() % 25;
			//cout << "case 3 " << "Jedi Level: " << j4 << " \n";
			jediNameCreate(); cout << ": Fear is the path to the dark side.\n";
			return j4;
		}
	}
return 0;

}

/*
function to create a random Jedi Name using a for loop and an array.
*/
void sithSim::jediNameCreate()
{
	srand(time(0));

	string suffixArray[10] = { "Skywalker", "Jin", "Kenobi", "Windu", "Tano", "Shan", "Secura", "Unduli" , " " };
	string prefixArray[10] = { "Luke", "", "Anakin", "Bastilla", "Revan", "Malak","Ahsoka", "Mace", "Ayla", "Luminara" };


	for (int i = 0; i < 1; i++)
	{

		cout << prefixArray[(rand() % 10)] << " " << suffixArray[(rand() % 10)];

	}

}

