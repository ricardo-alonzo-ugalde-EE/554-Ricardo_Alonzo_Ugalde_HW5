/*
main.cpp
Ricard Alonzo Ugalde
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
Homewor 5
*/

#include <iostream> 
#include <vector>
#include "implement.h"
#include <thread>
#include <chrono>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::setw;
using std::setfill;

int main()
{
    srand(time(0));

    // game stats
    sithSim sithApprentice;
    sithApprentice.playerAlive = true;
    sithApprentice.playerSkill = rand() % 75;
    int sithSkill = sithApprentice.playerSkill;
    sithApprentice.playerSkillSwap = rand() % 1000;
    int sithSkillSwap = sithApprentice.playerSkillSwap;
    sithApprentice.playerScore = 1;
    sithApprentice.playerName = "";
    sithApprentice.playerName = "";
    sithApprentice.jediCount = rand() % 10;
    sithApprentice.jediDefeated = 0;
    int jediSkill;
    int unlimmitedPowa = 0;
    int saberForm = 0;
    int fallenJedi = 1;
    std::vector < int > jediRound;
    int Grandmaster = 30;
    int Master = 20;
    int Knight = 10;
    int Padawan = 9;
    char switcharoo;


    // Main title sequence
    cout << std::setw(50) << "Sith Simulator" << setw(27) << "`" << endl;
    cout << setfill('`') << setw(77) << "`" << endl;
    cout << setw(50) << "Peace is a lie There is Only Passion" << setw(27) << "`" << endl; ;
    cout << setfill('`') << setw(77) << "`" << "\n" << endl;

    // Sith name declaration
    cout << "Chose and harness anger through your name: ";
    cin >> sithApprentice.playerName;
    cout << "The force is strong with you. A powerful sith you will become!\n" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << "Henceforth you shall be know as...!\n" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << "Darth... ";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << "... ";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << sithApprentice.playerName << "!!!!" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << "Rise! Darth " << sithApprentice.playerName << "!!!! \n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << setfill('`') << setw(77) << "`" << endl;


    

    /*
    Two conditions must be met to continue playing. The player must be alive,
    and the number of defeated jedi equals the number of randomly generated jedi.
    The random number is 0-10. 
    */
    
    while (sithApprentice.playerAlive && sithApprentice.jediDefeated < sithApprentice.jediCount)
    {
        /*
        use pass by pointer to offer switch power levels after every round!
        */
        cout << "Sith Master: I offer you the chance at unlimitted power. Will you accept?\n";
        cout << "(give up current power level for chance at greater level y/n?)";
        cin >> switcharoo;
        if (switcharoo == 'y' || switcharoo == 'Y')
        {
            sithApprentice.swapPowerLevel(&sithSkill, &sithSkillSwap);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << "Skill swap completed.\n" << endl;
        }
        else
        {
            cout << "Sith Master. There is no peace.\n" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }

        
        /*
        Creates a random jedi and a counter using a ranged based for loop and vector to keep track
        of rounds fought against the jedi.
        */
        cout << setfill('`') << setw(77) << "`" << endl;
        jediSkill = sithApprentice.jediCreate();
        cout << "Jedi Level: " << jediSkill << "\n" ;
        for (int a : jediRound) // range based for loop to print the number of fallen Jedi
        {
            cout << "Round:" << a << "\n" << endl;
        }


        /*
        The idea is to have a text based battle and maybe improve on it in later itterations 
        to add more winning conditions, mulptiple enemies at once, and the ability to train
        the sith before going into battle. This game is based  "Fallout Shelter" by Bethesda
        */
        if (jediSkill > 20)
        {
            sithApprentice.jediNameCreate(); cout << ", a Jedi Master has entered the battlefield." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << sithApprentice.playerName <<":" << "A Jedi Master! Finally a worthy opponent." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-8 to channel the Dark Side of the Force:" << endl;
            cin >> unlimmitedPowa;
            sithApprentice.getForcePower(unlimmitedPowa);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-9 to select a lightsaber form:" << endl;
            cin >> saberForm;
            sithApprentice.getLightsaberForm(saberForm);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));

        }
        
        else if (jediSkill >=11 && jediSkill <= 20)
        {
            sithApprentice.jediNameCreate(); cout << ", a Jedi knight has entered the battlefield." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << sithApprentice.playerName << ":" << "I will be the death of you Knight!" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-8 to channel the Dark Side of the Force:" << endl;
            cin >> unlimmitedPowa;
            sithApprentice.getForcePower(unlimmitedPowa);
            //cout << "Lightsaber drawn." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-9 to select a lightsaber form:" << endl;
            cin >> saberForm;
            sithApprentice.getLightsaberForm(saberForm);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }

        else if (jediSkill <= 10)
        {   
            sithApprentice.jediNameCreate(); cout << ", a padawan has entered the battlefield." << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << sithApprentice.playerName << ":" << "A worthless padawan. You'll die in vain!!" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-8 to channel the Dark Side of the Force:" << endl;
            cin >> unlimmitedPowa;
            sithApprentice.getForcePower(unlimmitedPowa);
             std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cout << endl << "enter a number 1-9 to select a lightsaber form:" << endl;
            cin >> saberForm;
            sithApprentice.getLightsaberForm(saberForm);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }

        
        /*
        Death Condition if Jedi is more powerful than siith
        */ 
        if (sithApprentice.playerSkill < jediSkill)
        {
            sithApprentice.playerAlive = false;
            cout << "You have died." << endl;
            cout << setfill('`') << setw(77) << "`" << endl;
        }

        /*
        Updates defeated jedi counter and the vector keeping track of all wins
        */
        else 
        {
            if (sithApprentice.playerSkill - jediSkill > 20)
            {
                cout << "Jedi defeated." << endl;
                cout << sithApprentice.playerName << ": Unlimitted powa!!!" << endl;
                cout << sithApprentice.playerName << ": Do it!!" << endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                //sithApprentice.playerScore = sithApprentice.playerScore +1;
                fallenJedi++;
                jediRound.push_back(fallenJedi); // vector store fallen Jedi
                cout << setfill('`') << setw(77) << "`" << endl;
            }

            else if (sithApprentice.playerSkill - jediSkill > 10) 
            {
                cout << "Jedi defeated." << endl;
                cout << sithApprentice.playerName << ": The jedi code is laughable." << endl;
                cout << sithApprentice.playerName << ": You are one with your force now jedi!" << endl;
                fallenJedi++;
                jediRound.push_back(fallenJedi); // vector store fallen Jedi
                cout << setfill('`') << setw(77) << "`" << endl;
               
            }

            else if (sithApprentice.playerSkill - jediSkill > 0)
            {
                cout << "Jedi defeated." << endl;
                cout << sithApprentice.playerName << ": Worthless jedi." << endl;
                cout << sithApprentice.playerName << ": A dead jedi is a good jedi!!" << endl;
                //sithApprentice.playerScore = sithApprentice.playerScore * 2;
                fallenJedi++;
                jediRound.push_back(fallenJedi); // vector store fallen Jedi
                cout << setfill('`') << setw(77) << "`" << endl;
              
            }

            else 
            {
                cout << sithApprentice.playerName << ": I've defeated the jedi. Barely. I need akolto tank immeditely" << endl;
                fallenJedi++;
                jediRound.push_back(fallenJedi); // vector store fallen Jedi
                cout << setfill('`') << setw(77) << "`" << endl;
               
            }

            sithApprentice.jediDefeated++;
        }

        cout << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    /*
    Winning condition of the amount of jedi defeated equals the random number of jedi generated
    */
    if (sithApprentice.jediDefeated == sithApprentice.jediCount) 
    {        
        cout <<sithApprentice.playerName << ": The Jedi will be eradicated." << endl;

    }

    /*
    Losing condtion if encountered a more powerful jedi
    */
    else
    {
        cout << sithApprentice.playerName << ": I've failed master." << endl;
    }
        
    cout << sithApprentice.jediDefeated << " Jedi have fallen." << endl << endl;
    
   






		
	return 0;
}


