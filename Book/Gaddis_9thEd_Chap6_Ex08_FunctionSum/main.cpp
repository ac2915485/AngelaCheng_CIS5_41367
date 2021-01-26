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
void showSum(int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int value1, value2, value3;
    
    //Initialize Variables
    cout<<"Enter three integers and I will display their sum."<<endl;
    cin>>value1>>value2>>value3;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    showSum(value1, value2, value3);
    
    //Exit the Program - Cleanup
    return 0;
}

void showSum(int num1, int num2, int num3) {
    cout<<(num1+num2+num3)<<endl;
}
