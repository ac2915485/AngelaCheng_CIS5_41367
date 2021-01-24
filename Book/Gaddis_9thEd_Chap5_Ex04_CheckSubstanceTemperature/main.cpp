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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float MAXTEMP=102.5; //maximum temperature

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float temp; //hold the temperature
    
    //Initialize Variables
    cout<<"Enter the substance's Celsius temperature: "<<endl;
    cin>>temp;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    while(temp>MAXTEMP) {
        cout<<"The temperature is too high. Turn the thermostat down and wait 5 minutes."<<endl;
        cout<<"Then take the Celsius temperature again and enter it here: "<<endl;
        cin>>temp;
    }
    
    cout<<"The temperature is acceptable."<<endl;
    cout<<"Check it again in 15 minutes."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

