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
    int length,
            width,
            area;
    
    //Initialize Variables
    cout<<"This program calculates the area of a rectangle."<<endl;
    cout<<"What is the length of the rectangle?"<<endl;
    cin>>length;
    cout<<"What is the width of the rectangle?"<<endl;
    cin>>width;
    
    //Map Inputs to Outputs -> Process
    area=length*width;
    
    //Display Inputs/Outputs
    cout<<"The area of the rectangle = "<<area;
    
    //Exit the Program - Cleanup
    return 0;
}

