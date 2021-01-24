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
const int MIN=1; //starting number to square
const int MAX=10; //maximum number to square

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int num;
    
    //Initialize Variables
    num=MIN; //counter
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Number Number Squared"<<endl;
    cout<<"---------------------"<<endl;
    while (num<=MAX) {
        cout<<num<<"\t\t"<<(num*num)<<endl;
        num++; //increment the counter
    }
    
    //Exit the Program - Cleanup
    return 0;
}

