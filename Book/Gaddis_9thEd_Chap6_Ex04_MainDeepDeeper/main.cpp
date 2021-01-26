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
void deeper() {
    cout<<"I am now inside the function deeper."<<endl;
}
void deep() {
    cout<<"I am no inside the funtion deep."<<endl;
    deeper();
    cout<<"Now I am back in deep."<<endl;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"I am starting in function main."<<endl;
    deep();
    cout<<"Back in function main again."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

