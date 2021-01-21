/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 11, 2021, 8:51 PM
 * Purpose: Savage | Sums and Average
 *          Note: Using the ternary operator
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int   maxCap, //The maximum capacity
            number; //Number of people
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap;
    cin>>number;
    
    //Final Calculation
    
    //Display Inputs/Outputs
    if (maxCap>number)
        cout<<"Meeting can be held."<<endl<<"Increase number of people by "<<maxCap-number<<" will be allowed without violation.";
    else
        cout<<"Meeting cannot be held."<<endl<<"Reduce number of people by "<<number-maxCap<<" to avoid fire violation.";
    //Exit the Program - Cleanup
    return 0;
}

