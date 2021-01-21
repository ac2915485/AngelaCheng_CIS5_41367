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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short testVar;
    
    //Initialize Variables
    testVar=32767;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<testVar<<endl;
    
    testVar=testVar+1; //Add 1 to testVar to make it overflow
    cout<<testVar<<endl;
    
    testVar=testVar-1; //Subtract 1 from testVar to make it underflow
    cout<<testVar<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

