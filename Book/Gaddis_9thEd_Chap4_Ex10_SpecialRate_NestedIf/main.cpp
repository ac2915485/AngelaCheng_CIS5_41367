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
    char employ,
            grad;
    
    //Initialize Variables
    cout<<"Answer the following questions with either Y for Yes or N for No."<<endl;
    cout<<"Are you employed?"<<endl;
    cin>>employ;
    cout<<"Have you graduated from college in the past two years?"<<endl;
    cin>>grad;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    if (employ=='Y') {
        if (grad=='Y') {
            cout<<"You qualify for the special interest rate."<<endl;
        }
    }
    
    //Exit the Program - Cleanup
    return 0;
}

