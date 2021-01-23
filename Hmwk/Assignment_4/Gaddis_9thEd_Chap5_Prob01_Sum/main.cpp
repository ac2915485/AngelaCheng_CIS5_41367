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
    int num, //Enter a positive integer number
            sum=0; //Calculate the sum
    
    //Initialize Variables
    cin>>num;
    
    //Map Inputs to Outputs -> Process
    for(int i=1; i<=num; i++) {
        sum+=i;
    }
    
    //Display Inputs/Outputs
    cout<<"Sum = "<<sum;
    
    //Exit the Program - Cleanup
    return 0;
}

