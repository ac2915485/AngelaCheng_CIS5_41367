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
int sum(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int value1, value2, total;
    
    //Initialize Variables
    value1=20;
    value2=40;
    
    //Map Inputs to Outputs -> Process
    total=sum(value1, value2);
    
    //Display Inputs/Outputs
    cout<<"The sum of "<<value1<<" and "<<value2<<" is "<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

int sum(int num1, int num2) {
    return num1+num2;
}