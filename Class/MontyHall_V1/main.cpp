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
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    char player,prize,opnDoor;
    
    //Initialize Variables
    player=rand()%3+'1';//Random door choose 1,2 or 3
    prize=rand()%3+'1';//Random door choose 1,2 or 3
    do{
        opnDoor=rand()%3+'1';//Random door choose 1,2 or 3
    }while(opnDoor==prize||opnDoor==player);
    
    //Process or map Inputs and output
    cout<<"Player chooses door   ="<<player<<endl;
    cout<<"Prize is behind door  ="<<prize<<endl;
    cout<<"Door to Open          ="<<opnDoor<<endl;
            
    
    //Exit stage right!
    return 0;
}

char guess(){
    char rps;
    do{
        rps=rand()%4+'P';
    }while(rps=='Q');
    return rps;
}

