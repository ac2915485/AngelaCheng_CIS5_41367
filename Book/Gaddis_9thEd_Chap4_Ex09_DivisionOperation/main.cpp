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
    float num1,
            num2,
            quot;
    
    //Initialize Variables
    cout<<"Enter a number."<<endl;
    cin>>num1;
    cout<<"Enter another number"<<endl;
    cin>>num2;
    
    //Map Inputs to Outputs -> Process
    if (num2==0) {
        cout<<"Division by zero is not possible."<<endl;
        cout<<"Please run the program again and enter a number other than zero."<<endl;
    } else {
        quot=num1/num2;
        cout<<"the quotient of "<<num1<<" divided by "<<num2<<" is "<<quot<<endl;
    }
    
    //Display Inputs/Outputs
    
    
    //Exit the Program - Cleanup
    return 0;
}

