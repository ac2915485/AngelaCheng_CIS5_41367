/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 12, 2021, 8:51 PM
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
    float milBdgt, // Military budget
            fedBdgt, // Federal budget
            mlPrcnt; // Military budget as a percentage of the federal budget
    
    //Initialize Variables
    milBdgt=7.0e11f;
    fedBdgt=4.1e12f;
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=(milBdgt/fedBdgt)*100;
    
    //Display Inputs/Outputs
    cout<<"The military budget as a percentage of the federal budget is "<<mlPrcnt<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

