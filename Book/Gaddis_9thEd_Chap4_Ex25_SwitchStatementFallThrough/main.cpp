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
    int model;
    
    //Initialize Variables
    cout<<"Our TVs come in three models:"<<endl;
    cout<<"The 100, 200, and 300. Which one do you want?"<<endl;
    cin>>model;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<"That model has the following features:"<<endl;
    switch (model) {
        case 300:
            cout<<"\tPicture-in-a-picture."<<endl;
        case 200:
            cout<<"\tStereo sound."<<endl;
        case 100:
            cout<<"\tRemote control."<<endl;
        default:
            cout<<"You can only choose the 100, 200, or 300."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

