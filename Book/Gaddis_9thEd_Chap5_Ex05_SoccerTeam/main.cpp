/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 4, 2021, 8:51 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment problem
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int minPlay=9; //minimum players
const int maxPlay=15; //maximum players

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int player, //number of available players
            team, //number of desired players per team
            numTeam, //number of teams
            left; //number of players left over
    
    //Initialize Variables
    cout<<"How many players do you wish per team?"<<endl; //get the number of players per team
    cin>>team;
    while (team<minPlay || team>maxPlay) {
        cout<<"You should have at least "<<minPlay<<" but no more than "<<maxPlay<<" per team."<<endl;
        cout<<"How many players do you wish per team?"<<endl;
        cin>>team;
    }
    
    cout<<"How many players are available?"<<endl; //get the number of players available
    cin>>player;
    while (player<=0) {
        cout<<"Please enter 0 or greater."<<endl;
        cin>>player;
    }
    
    //Map Inputs to Outputs -> Process
    numTeam=player/team; //calculate the number of team
    left=player%team; //calculate the number o leftover players
    
    //Display Inputs/Outputs
    cout<<"There will be "<<numTeam<<" teams with "<<left<<" players left over."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

