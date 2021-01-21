/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob07_OceanLevels
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
    float mpy, //Millimeters per year, unit
            numFv, //The number of millimeters higher than the current level in 5 years
            numSv, //The number of millimeters higher than the current level in 7 years
            numTn; //The number of millimeters higher than the current level in 10 years
    
    //Initialize Variables
    mpy=1.5;
    
    //Map Inputs to Outputs -> Process
    numFv=mpy*5;
    numSv=mpy*7;
    numTn=mpy*10;
    
    //Display Inputs/Outputs
    cout<<"The number of millimeters higher than the current level that the ocean's level will be in 5 years: "<<numFv<<endl;
    cout<<"The number of millimeters higher than the current level that the ocean's level will be in 7 years: "<<numSv<<endl;
    cout<<"The number of millimeters higher than the current level that the ocean's level will be in 10 years: "<<numTn<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

