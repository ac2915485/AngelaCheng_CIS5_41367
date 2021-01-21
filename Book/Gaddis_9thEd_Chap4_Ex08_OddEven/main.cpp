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
    int number;
    
    //Initialize Variables
    cout<<"Enter an integer and I will tell if you it is odd or even."<<endl;
    cin>>number;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    if (number%2==0) {
        cout<<number<<" is even."<<endl;
    } else {
        cout<<number<<" is odd."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

