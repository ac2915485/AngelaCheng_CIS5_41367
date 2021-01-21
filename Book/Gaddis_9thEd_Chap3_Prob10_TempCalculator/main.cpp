/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 12, 2021, 8:51 PM
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
const int CNVDEC=100; //Conversions. high dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float dgFah, //Your house worth
            dgCel; //Total insurance need
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    
    cin>>dgFah;
    dgCel=(5*(dgFah-32))/9;
    
    //Display Inputs/Outputs
    cout<<dgFah<<" Degrees Fahrenheit = "<<dgCel<<" Degrees Centigrade";
    
    //Exit the Program - Cleanup
    return 0;
}

