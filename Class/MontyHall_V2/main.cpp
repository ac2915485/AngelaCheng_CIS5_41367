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
    unsigned int nPlays=1000000,stay=0;
    
    //Play price right any number of times
    for(int game=1;game<=nPlays;game++){
        //Initialize Variables
        player=rand()%3+'1';//Random door choose 1,2 or 3
        prize=rand()%3+'1';//Random door choose 1,2 or 3
        do{
            opnDoor=rand()%3+'1';//Random door choose 1,2 or 3
        }while(opnDoor==prize||opnDoor==player);
        if(prize==player)stay++;
    }
    
    //Process or map Inputs and output
    cout<<"Player staying wins "<<100.0f*stay/nPlays<<"%"<<endl;
    cout<<"Player changing wins "<<100.0f*(nPlays-stay)/nPlays<<"%"<<endl;
    
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

