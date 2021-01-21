/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 11, 2021, 8:51 PM
 * Purpose: Savage | Sums and Average
 *          Note: Using the ternary operator
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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   preSal, //Previous salary
            rtaPay, //Retroactive pay
            newAnl, //New annual salary
            newMon; //New monthly salary
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Input previous annual salary."<<endl;
    cin>>preSal;
    rtaPay=preSal*0.076/2;
    newAnl=preSal+rtaPay*2;
    newMon=newAnl/12;
        
    //Display Inputs/Outputs
    cout<<"Retroactive pay    = $  "<<rtaPay<<endl;
    cout<<"New annual salary  = $"<<newAnl<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMon;

    //Exit the Program - Cleanup
    return 0;
}
