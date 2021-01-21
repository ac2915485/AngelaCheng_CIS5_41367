/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 16, 2021, 8:51 PM
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
    int book,
            month;
    float perMon;
    
    //Initialize Variables
    cout<<"How many books do you plan to read?"<<endl;
    cin>>book;
    cout<<"How many months will it take you to read them?"<<endl;
    cin>>month;
    
    //Map Inputs to Outputs -> Process
    perMon=static_cast<float>(book)/month;
    
    //Display Inputs/Outputs
    cout<<"That is "<<perMon<<" books per month."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

