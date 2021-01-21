/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 8, 2021, 8:51 PM
 * Purpose: Calculate the user's pay
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
    float hours, //The hours that a user work
            rate, // Rate that a user earn per hour
            pay; // The total amount that a user earn
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"How many hours did you work? "<<endl;
    cin>>hours;
    
    cout<<"How much do you get paid per hour? "<<endl;
    cin>>rate;
    
    pay=hours*rate;
    
    cout<<"You have earned $"<<pay<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

