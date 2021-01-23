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
    int num,
            max,
            min;
    
    //Initialize Variables
    cin>>num;
    min=max=num;
    
    do {
        if (num<min)
            min=num;
        if (num>max)
            max=num;
        cin>>num;
    }while(num!=-99);
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    
    //Exit the Program - Cleanup
    return 0;
}

