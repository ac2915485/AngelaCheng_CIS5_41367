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
#include <cmath> //Math Library 
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVPRCT=100.0f; //Conversion from percent 

//Function Prototypes
float fv1(float, float, int);
float fv2(float, float, int);
float fv3(float, float, int);
float fv4(float, float, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pv,  //Present value in $
          intRate; //Interest rate in %
    int numCmpd; //Number of compounding periods in years
    
    //Initialize Variables
    pv=100.0f; //$100
    intRate=6; //6 percent
    numCmpd=12; //Using rule of 72 -> 72/6=12
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Savings Calculator"<<endl;
    cout<<"Initial Conditions"<<endl;
    cout<<"Present Value        = $"<<pv<<endl;
    cout<<"Interest Rate        = "<<intRate<<"%"<<endl;
    cout<<"Number of Years      = "<<numCmpd<<endl;
    cout<<"Savings -> For-Loop  = $"<<fv1(pv,intRate/CNVPRCT,numCmpd)<<endl;
    cout<<"Savings -> pow       = $"<<fv2(pv,intRate/CNVPRCT,numCmpd)<<endl;
    cout<<"Savings -> Exp-Log   = $"<<fv3(pv,intRate/CNVPRCT,numCmpd)<<endl;
    cout<<"Savings -> Recursion = $"<<fv4(pv,intRate/CNVPRCT,numCmpd)<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

float fv1(float pv, float i, int n) {
    for(int j=1;j<=n;j++) {
        pv*=(1+i);
    }
    return pv;
}

float fv2(float pv, float i, int n) {
    return pv*pow(1+i,n);
}

float fv3(float pv, float i, int n) {
    return pv*exp(n*log(1+i));
}

float fv4(float pv, float i, int n) {
    if(n<=0)return pv;
    return fv4(pv,i,n-1)*(1+i);
}