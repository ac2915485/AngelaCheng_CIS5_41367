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
    float cookies, //The amount of cookies you eat
            cal, //Calories per cookie
            totCal; //Total calories consumed
    
    //Initialize Variables
    cal=75;
    
    //Map Inputs to Outputs -> Process
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    
    cin>>cookies;
    totCal=cookies*cal;
    
    //Display Inputs/Outputs
    cout<<"You consumed "<<totCal<<" calories.";
    
    //Exit the Program - Cleanup
    return 0;
}

