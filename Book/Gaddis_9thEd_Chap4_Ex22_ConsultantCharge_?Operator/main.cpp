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
    //Initialize the Random Number Seed
    
    //Declare Variables
    const float PAYRATE=50.0;
    const int MIN_HOUR=5;
    float hour,
            charge;
    
    //Initialize Variables
    cout<<"How many hours were worked?"<<endl;
    cin>>hour;
    
    hour=hour<MIN_HOUR?MIN_HOUR:hour; //Determine the hours to charge for
    
    //Map Inputs to Outputs -> Process
    charge=PAYRATE*hour;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The charges are $"<<charge<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

