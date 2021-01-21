/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 16, 2021, 8:51 PM
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
    //Initialize the Random Number Seed
    unsigned seed=time(0);
    
    //Declare Variables
    const int min=1,
            max=6;
    int die1,
            die2;
    
    //Initialize Variables
    srand(seed);
    cout<<"Rolling the dice..."<<endl;
    die1=(rand()%(max-min+1))+min;
    die2=(rand()%(max-min+1))+min;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<die1<<endl;
    cout<<die2<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

