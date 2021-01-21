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
#include <cmath>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float a,
            b,
            c;
    
    //Initialize Variables
    cout<<"Enter the length of side a: "<<endl;
    cin>>a;
    cout<<"Enter the length of side b: "<<endl;
    cin>>b;
    
    //Map Inputs to Outputs -> Process
    c=sqrt(pow(a,2)+pow(b,2));
    
    //Display Inputs/Outputs
    cout<<"The length of the hypotenuse is "<<setprecision(2)<<c<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

