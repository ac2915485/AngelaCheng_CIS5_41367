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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int days,   //days worked
        payDay, //1 penny to be paid per day
        paySum, //daily earning sum
        pennies, //pay earned in pennies
        dollars;  //pay earned in dollars
    
    //Initialize or input i.e. set variable values
    paySum=0;
    cin>>days;
    
    //Map inputs -> outputs
    if (days<=0)    //make sure the user entered at least 1 day
    {
        cout<<"Error: Please enter 1 or greater.";
        cin>>days;
    }
    else    //calculate the pay in pennies
        {
            for (payDay=1; days>=1; days--)
            {
                paySum+=payDay;
                payDay*=2;
            }
            dollars=paySum/100;
            pennies=paySum%100;
            cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;
        }
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}

