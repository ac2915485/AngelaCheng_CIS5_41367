/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob05_AverageOfValues
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
    float one, //First number
            two, //Second number
            three, //Third number
            four, //Fourth number
            five, //Fifth number
            sum, //The sum of five numbers
            avg; //The average of five numbers
    
    //Initialize Variables
    one=28;
    two=32;
    three=37;
    four=24;
    five=33;
    
    //Map Inputs to Outputs -> Process
    sum=one+two+three+four+five;
    avg=sum/5;
    
    //Display Inputs/Outputs
    cout<<"The average is "<<avg<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

