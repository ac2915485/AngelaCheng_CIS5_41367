/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob01_SumOfTwoNumbers
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
    int one, //First number
            two, //Second number
            total; //sum of two numbers
    
    //Initialize Variables
    one=50;
    two=100;
    
    //Map Inputs to Outputs -> Process
    total=one+two;
    
    //Display Inputs/Outputs
    cout<<"The sum of "<<one<<" and "<<two<<" is "<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

