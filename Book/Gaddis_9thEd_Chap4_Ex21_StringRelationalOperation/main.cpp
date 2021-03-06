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
#include <string>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const float PRICE_A=249.0,
            PRICE_B=199.0;
    string partNum;
    
    //Initialize Variables
    cout<<"The headphone part numbers are: "<<endl;
    cout<<"Noise canceling part number S-29A"<<endl;
    cout<<"Wireless part number: S-29B"<<endl;
    cout<<"Enter the part number of the headphones you wish to purchase."<<endl;
    cin>>partNum;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    if (partNum=="S-29A") {
        cout<<"The price is $"<<PRICE_A<<endl;
    } else if (partNum=="S-29B") {
        cout<<"The price is $"<<PRICE_B<<endl;
    } else {
        cout<<partNum<<" is not a valid part number."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

