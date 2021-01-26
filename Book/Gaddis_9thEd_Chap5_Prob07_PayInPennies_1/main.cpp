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
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int pennies, days;
    float dollars;
    
    //Initialize or input i.e. set variable values
    pennies=0;
    cin>>days;
    
    //Map inputs -> outputs
    for (int i=0;i<days;i++) {
        pennies+=pow(2,i);
    }
    dollars=(float)pennies*0.01;
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Pay = $"<<setw(5)<<dollars;
    
    //Exit stage right or left!
    return 0;
}

