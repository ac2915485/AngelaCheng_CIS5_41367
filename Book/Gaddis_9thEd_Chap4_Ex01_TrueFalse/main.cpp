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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    bool trueValue,
         falseValue;
    int x,
        y;
    
    //Initialize Variables
    x=5;
    y=10;
    
    //Map Inputs to Outputs -> Process
    trueValue=x<y;
    falseValue=y==x;
    
    //Display Inputs/Outputs
    cout<<"True is "<<trueValue<<endl;
    cout<<"False is "<<falseValue<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

