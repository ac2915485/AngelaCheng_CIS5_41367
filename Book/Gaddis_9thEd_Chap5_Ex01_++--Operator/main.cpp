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
    int num; //number
    
    //Initialize Variables
    num=4;
    
    //Map Inputs to Outputs -> Process
    cout<<"The variable num is "<<num<<endl;
    cout<<"I will now increment num."<<endl<<endl;
    
    num++; //use postfix++ to increment num
    cout<<"Now the variable num is "<<num<<endl;
    cout<<"I will increment num again."<<endl<<endl;
    
    ++num; //use prefix++ to increnemnt num
    cout<<"Now the variable num is "<<num<<endl;
    cout<<"I will now decrement num."<<endl<<endl;
    
    num--; //use postfix-- to decrement num
    cout<<"Now the variable num is "<<num<<endl;
    cout<<"I will decrement num again."<<endl<<endl;
    
    --num; //use prefix-- to increment num
    cout<<"Now the variable num is "<<num<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

