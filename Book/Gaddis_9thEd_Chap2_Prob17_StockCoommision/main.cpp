/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob17_StockCommission
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
    float share, //Total Share of Stocks
            perSh, //Price per Share
            com, //Stockbroker Commission in Percentage
            prePr, //The amount paid for the stock along
            amCom, // The amount of the commission
            total; //The total amount paid for the stock plus the commission
    
    //Initialize Variables
    share=750;
    perSh=35;
    com=2;
    
    //Map Inputs to Outputs -> Process
    prePr=share*perSh;
    amCom=prePr*(com/100);
    total=prePr+amCom;
    
    //Display Inputs/Outputs
    cout<<"Kathryn bought "<<share<<" shares of stock at a price of $"<<perSh<<" per share."<<endl<<endl;
    cout<<"The amount paid for the stock along (without the commission): $"<<prePr<<endl;
    cout<<"The amount of the commission: $"<<amCom<<endl;
    cout<<"The total amount paid (for the stock plus the commission): $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

