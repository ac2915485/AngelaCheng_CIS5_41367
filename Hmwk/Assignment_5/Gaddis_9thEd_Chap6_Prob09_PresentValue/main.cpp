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
#include <iostream> //I/O Library'
#include <cmath>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float psntVal(float futVal,float rate,int years);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float fValue, intRate; //future value of an account and the interest rate used to get there
    int nYears; //number of years money will sit in the account
    float pValue;   //present value of the account needed to achieve future value
    
    //Initialize Variables
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
    cin>>fValue;
    cout<<"Input the Number of Years\n";
    cin>>nYears;
    cout<<"Input the Interest Rate %/yr\n";
    cin>>intRate;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    pValue=psntVal(fValue,intRate,nYears);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The Present Value = $"<<pValue;
    
    //Exit the Program - Cleanup
    return 0;
}

//P=F/(1+r)^n
float psntVal(float futVal,float rate,int years)
{
    rate/=100;
    return futVal/pow(1+rate,years);
}

