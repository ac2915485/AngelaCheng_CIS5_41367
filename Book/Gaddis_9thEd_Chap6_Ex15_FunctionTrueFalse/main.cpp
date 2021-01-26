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
bool isEven(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int val;
    
    //Initialize Variables
    cout<<"Enter an integer and I will tell you if it is even or odd: "<<endl;
    cin>>val;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    if (isEven(val))
        cout<<val<<" is even."<<endl;
    else
        cout<<val<<" is odd."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

//This function accepts an integer argument and tests it to be even or odd. The function returns true if the argument is even or false if the argument is odd.
//The return value is a bool
bool isEven(int num) {
    bool status;
    if (num%2==0)
        status=true; //The number is even if there is no remainder
    else
        status=false; //otherwise, the number is odd
    return status;
}

