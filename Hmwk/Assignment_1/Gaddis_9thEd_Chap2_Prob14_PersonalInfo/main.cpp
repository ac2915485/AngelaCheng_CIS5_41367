/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob14_PersonalInfo
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
    string name, //Your name
            addr, //Your address, with city, state, and ZIP code
            num, //Your telephone number
            maj; //Your college major
    
    //Initialize Variables
    name="Angela";
    addr="1234 1st Drive, Riverside, CA, 92870";
    num="123-456-7890";
    maj="Computer Science";
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Name:     "<<name<<endl<<"Address:  "<<addr<<endl<<"Number:   "<<num<<endl<<"Major:    "<<maj<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

