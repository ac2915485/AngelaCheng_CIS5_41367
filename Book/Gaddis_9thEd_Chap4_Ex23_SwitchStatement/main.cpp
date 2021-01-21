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
    char choice;
    
    //Initialize Variables
    cout<<"Enter A, B, or C."<<endl;
    cin>>choice;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    switch (choice) {
        case 'A':
            cout<<"You entered A."<<endl;
            break;
        case 'B':
            cout<<"You entered B."<<endl;
            break;
        case 'C':
            cout<<"You entered C."<<endl;
            break;
        default:
            cout<<"You did not enter A, B, or C!"<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

