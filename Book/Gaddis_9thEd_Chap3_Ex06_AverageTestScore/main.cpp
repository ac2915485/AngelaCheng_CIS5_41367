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
    float test1,
            test2,
            test3,
            average;
    
    //Initialize Variables
    cout<<"Enter the first test score: "<<endl;
    cin>>test1;
    cout<<"Enter the second test score: "<<endl;
    cin>>test2;
    cout<<"Enter the third test score: "<<endl;
    cin>>test3;
    
    //Map Inputs to Outputs -> Process
    average=(test1+test2+test3)/3;
    
    //Display Inputs/Outputs
    cout<<"The average score = "<<average<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

