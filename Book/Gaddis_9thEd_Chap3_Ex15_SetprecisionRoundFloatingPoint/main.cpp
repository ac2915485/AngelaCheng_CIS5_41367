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
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float quot, //quotient
            num1, //number 1
            num2; //number 2
    
    //Initialize Variables
    num1=132.364;
    num2=26.91;
    
    //Map Inputs to Outputs -> Process
    quot=num1/num2;
    
    //Display Inputs/Outputs
    cout<<quot<<endl;
    cout<<setprecision(5)<<quot<<endl;
    cout<<setprecision(4)<<quot<<endl;
    cout<<setprecision(3)<<quot<<endl;
    cout<<setprecision(2)<<quot<<endl;
    cout<<setprecision(1)<<quot<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

