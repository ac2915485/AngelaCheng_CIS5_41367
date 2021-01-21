/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob06_AnnualPay
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
    int payAmount, //The amount of pay the employee earns each pay period
            payPeriods, //The number of pay periods in a year
            annualPay; //The employee's total annual pay
    
    //Initialize Variables
    payAmount=2200;
    payPeriods=26;
    
    //Map Inputs to Outputs -> Process
    annualPay=payAmount*payPeriods;
    
    //Display Inputs/Outputs
    cout<<"The total annual pay: $"<<annualPay<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

