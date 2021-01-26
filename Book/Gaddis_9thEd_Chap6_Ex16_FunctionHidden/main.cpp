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
void hidFunc(); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int num;
    
    //Initialize Variables
    num=1;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"In main, num is "<<num<<endl;
    hidFunc();
    cout<<"Back in main, num is "<<num<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

void hidFunc() {
    int num=20; //local variable
    cout<<"In hidFunc, num is "<<num<<endl;
}