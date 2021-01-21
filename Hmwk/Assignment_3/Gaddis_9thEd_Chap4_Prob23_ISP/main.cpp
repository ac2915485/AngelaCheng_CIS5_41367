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
    string package,
            A,
            B,
            C;
    float hour;
    
    
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package;
    cin>>hour;
    
    //Map Inputs to Outputs -> Process
    if (package=="A") {
        if (hour<=10) {
            cout<<"Bill = $  9.95";
        } else {
            cout<<"Bill = $"<<setw(6)<<9.95+(hour-10)*2;
        }
    }
    if (package=="B") {
        if (hour<=20) {
            cout<<"Bill = $ 14.95";
        } else {
            cout<<"Bill = $"<<setw(6)<<14.95+(hour-20);
        }
    }
    if (package=="C") {
        cout<<"Bill = $ 19.95";
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

