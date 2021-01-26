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
void divide(float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1, num2;
    
    //Initialize Variables
    cout<<"Enter two numbers and I will divide the first number by the second number: "<<endl;
    cin>>num1>>num2;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    divide(num1, num2);
    
    //Exit the Program - Cleanup
    return 0;
}

void divide(float arg1, float arg2) {
    if(arg2==0.0) {
        cout<<"Sorry, I cannot divide by zero.";
        return;
    }
    cout<<"The quotient is "<<(arg1/arg2)<<endl;
}