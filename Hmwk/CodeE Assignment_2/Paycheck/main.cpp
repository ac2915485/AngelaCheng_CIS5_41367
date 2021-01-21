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
#include <cmath>
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
    int hrs; //Hours worked
    float rate, //Pay rate per hour
            payChk; //Total paycheck
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    
    cin>>rate;
    cin>>hrs;
    payChk=(hrs>40)?(40*rate+(hrs-40)*rate*2):(rate*hrs);
    
    //Display Inputs/Outputs
    cout<<"Paycheck = $"<<setw(7)<<payChk;
    
    //Exit the Program - Cleanup
    return 0;
}

