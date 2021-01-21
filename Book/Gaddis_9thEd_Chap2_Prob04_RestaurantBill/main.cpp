/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob04_RestaurantBill
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
    float meal, //The total meal charge
            perTax, //The amount of tax in percentage
            perTip, //The amount of tip in percentage
            tax, //The total tax amount
            tip, //The total tip amount
            total; //The total bill amount
    
    //Initialize Variables
    meal=88.67;
    perTax=6.75;
    perTip=20;
    
    //Map Inputs to Outputs -> Process
    int itax=(meal*(6.75/100)+0.005)*100;
    tax=itax/100.0f;
    int itip=((meal+tax)*(0.2)+0.005)*100;
    tip=itip/100.0f;
    total=meal+tax+tip;
    
    //Display Inputs/Outputs
    cout<<"The meal cost is $"<<meal<<endl;
    cout<<"The tax amount is $"<<tax<<endl;
    cout<<"The tip amount is $"<<tip<<endl;
    cout<<"The Total bill is $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

