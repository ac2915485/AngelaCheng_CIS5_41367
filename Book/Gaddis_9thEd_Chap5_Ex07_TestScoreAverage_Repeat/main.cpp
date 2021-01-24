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
    int score1,
            score2,
            score3;
    float avg;
    char again;
    
    //Initialize Variables
    do {
        cout<<"Enter 3 scores and I will average them:"<<endl;
        cin>>score1>>score2>>score3;
        
        avg=(score1+score2+score3)/3.0;
        cout<<"The average is "<<avg<<"."<<endl;
        
        cout<<"Do you want to average another set? (Y/N)"<<endl;
        cin>>again;
    }while (again=='Y' || again=='y');
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

