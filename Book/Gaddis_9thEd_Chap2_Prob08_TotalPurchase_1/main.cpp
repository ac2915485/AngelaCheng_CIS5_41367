/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 11, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob08_TotalPurchase_1
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVDEC=100; //Conversions, High dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float item, //5 items to purchase in $'s
            purcSum, // The sum of the 5 items purchased
            taxRate, // The tax rate in %
            taxCalc, // Tax calculation
            purcPrc; // Purchase price for all items in $'s
    char count; // Counter for the items
    
    //Initialize Variables
    taxRate=7.0f/CNVDEC;
    count=1;
    purcSum=0;
    
    //Map Inputs to Outputs -> Process
    //Format of the Dollar Items
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Input the 5 items to purchase"<<endl;
    
    //Purchase item 1
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Purchase item 2
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Purchase item 3
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Purchase item 4
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Purchase item 5
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Final Calculation
    taxCalc=taxRate*purcSum;
    purcPrc=taxCalc+purcSum;
    
    //Display Inputs/Outputs
    cout<<"The total price before tax    = $"<<purcSum<<endl;
    cout<<"The tax on the purchase price = $"<<taxCalc<<endl;
    cout<<"The total cost                = $"<<purcPrc<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

