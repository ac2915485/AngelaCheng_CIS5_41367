/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob08_TotalPurchase
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
    float itOne, //Price of item 1
            itTwo, //Price of item 2
            itThree, //Price of item 3
            itFour, //Price of item 4
            itFive, //Price of item 5
            sub, //Subtotal of the sale
            amTax, //The amount of sales tax
            total, //The total
            tax; //The sales tax in Percentage
    
    //Initialize Variables
    itOne=15.95;
    itTwo=24.95;
    itThree=6.95;
    itFour=12.95;
    itFive=3.95;
    tax=7.00;
    
    //Map Inputs to Outputs -> Process
    sub=itOne+itTwo+itThree+itFour+itFive;
    int iamTax=(sub*(tax/100)+0.005)*100;
    amTax = iamTax/100.0f;
    total=sub+amTax;
    
    //Display Inputs/Outputs
    cout<<"Price of item 1: $"<<itOne<<endl;
    cout<<"Price of item 2: $"<<itTwo<<endl;
    cout<<"Price of item 3: $"<<itThree<<endl;
    cout<<"Price of item 4: $"<<itFour<<endl;
    cout<<"Price of item 5: $"<<itFive<<endl<<endl;
    cout<<"The subtotal of the sale: $"<<sub<<endl;
    cout<<"The amount of sales tax: $"<<amTax<<endl;
    cout<<"The Total: $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

