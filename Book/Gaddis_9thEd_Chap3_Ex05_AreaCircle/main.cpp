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
#include <cmath>  //Need for pow function
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const float PI=3.14159;
    float area,
            radius;
    
    //Initialize Variables
    cout<<"This program calculates the area of a circle."<<endl;
    cout<<"What is the radius of the circle?"<<endl;
    cin>>radius;
    
    //Map Inputs to Outputs -> Process
    area=PI*pow(radius, 2.0);
    
    //Display Inputs/Outputs
    cout<<"The area = "<<area<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

