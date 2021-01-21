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
    const float MIN_INCOME=35000.0;
    const int MIN_YEAR=5;
    
    float income;
    int year;
    
    //Initialize Variables
    cout<<"What is your annual income?"<<endl;
    cin>>income;
    cout<<"How many years have you worked at your current job?"<<endl;
    cin>>year;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    if (income>=MIN_INCOME || year>MIN_YEAR) {
        cout<<"You qualify."<<endl;
    } else {
        cout<<"You must earn at least $"<<MIN_INCOME<<" or have been employed more than "<<MIN_YEAR<<" years."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

