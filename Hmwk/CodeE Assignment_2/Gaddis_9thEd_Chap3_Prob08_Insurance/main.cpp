/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 12, 2021, 8:51 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment problem
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVDEC=100; //Conversions. high dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float netWrt, //Your house worth
            totIns; //Total insurance need
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    
    cin>>netWrt;
    totIns=netWrt*0.8;
    
    //Display Inputs/Outputs
    cout<<"You need $"<<totIns<<" of insurance.";
    
    //Exit the Program - Cleanup
    return 0;
}

