
#include <iostream> 
#include <vector> 
using std::string;
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
#include <string.h>


class sithSim
{

/*
Class variables
*/
public:
    
	
	std::vector<int> Jedi; // vector variable declaration
	int playerAlive = true;
	int playerSkill = 0;
	int playerSkillSwap = 0;
	int playerScore = 1;
	string playerName = "";
	int jediCount = 0; 
	int jediDefeated = 0;
	

	
	

/*
Class constructor
*/
public:
	sithSim();


/*
function to pass by pointer
*/
public:
	void swapPowerLevel(int* x, int* y);


/*
function to pass by Reference
*/
public:
	void getForcePower(int &x);


/*
function to pass by value to select a lightsaber form
*/
public:
	void getLightsaberForm(int x);



/*
function to pass by reference ro craate  a new Jedi
*/
public:
	int jediCreate();


/*
Function to pas by pointer to generate a random Jedi name
*/
	void jediNameCreate();

	
};


