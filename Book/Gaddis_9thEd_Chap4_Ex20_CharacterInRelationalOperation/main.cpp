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
    char ch;
    
    //Initialize Variables
    cout<<"Enter a digit or a letter."<<endl;
    ch=cin.get();
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    if (ch>='0' && ch<='9') {
        cout<<"You entered a digit."<<endl;
    } else if (ch>='A' && ch<='Z') {
        cout<<"You entered an uppercase letter."<<endl;
    } else if (ch>='a' && ch<='z') {
        cout<<"You entered a lowercase letter."<<endl;
    } else {
        cout<<"That is not a digit or a letter."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

