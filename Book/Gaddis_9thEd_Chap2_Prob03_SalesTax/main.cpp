/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 11:27 AM
 * Purpose: Gaddis_9thEd_Chap2_Prob03_SalesTax
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
    float price, //Price on total purchase
                   stTax, //State Sales Tax in Percentage
                   cTax, //County Sales Tax in Percentage
                   tTax; //Total Sales Tax in Dollars
    
    //Initialize Variables
    price=95;
    stTax=4;
    cTax=2;
       
    //Map Inputs to Outputs -> Process
    tTax=price*((stTax+cTax)/100);
    
    //Display Inputs/Outputs
    cout<<"The state sales tax is "<<stTax<<"% and the county sales tax is "<<cTax<<"%."<<endl;
    cout<<"The total sales tax on a $"<<price<<" purchase is $"<<tTax<<"."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

