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
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
     int n;  //number input by user - will calculate factorial of this number
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>>n;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<n<<"! = "<<fctrl(n);
    
    //Exit the Program - Cleanup
    return 0;
}

//Function that calculates factorial of a number
int fctrl(int n)
{
    int fact; //to hold value of factorial of n
    fact=1;
    
    for (int i=1;i<=n;i++)
        fact*=i;
    return fact;
}


