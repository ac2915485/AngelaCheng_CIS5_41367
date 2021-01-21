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
#include <cstdlib> //Where random function is
#include <ctime> //Time will set the random number seed
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int rnd1to6, //Random number from 1 to 6
            rndm3to3, //Random number from -3 to 3
            rndmBegtoEnd, //Random number from beginning to end
            beg,
            end;
    
    //Initialize Variables
    rnd1to6=rand()%6+1;
    rndm3to3=rand()%7-3;
    beg=10;
    end=99;
    rndmBegtoEnd=rand()%(end-beg+1)+beg;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Random number in range of 1 to 6  = "<<rnd1to6<<endl;
    cout<<"Random number in range of -3 to 3 = "<<rndm3to3<<endl;
    cout<<"Random number in range of "<<beg<<" to "<<end<<" = "<<rndmBegtoEnd<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

