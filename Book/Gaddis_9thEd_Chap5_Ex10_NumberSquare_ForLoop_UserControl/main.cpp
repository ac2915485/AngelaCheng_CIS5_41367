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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int min,
            max,
            num;
    
    //Initialize Variables
    cout<<"I will display a table of numbers and their squares."<<endl;
    cout<<"Enter the starting number: "<<endl;
    cin>>min;
    cout<<"Enter the ending number: "<<endl;
    cin>>max;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Number Number Square"<<endl;
    cout<<"--------------------"<<endl;
    
    for (num=min; num<=max; num++)
        cout<<num<<"\t\t"<<(num*num)<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

