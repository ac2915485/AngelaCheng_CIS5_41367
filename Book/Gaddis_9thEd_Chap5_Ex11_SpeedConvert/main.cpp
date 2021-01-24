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
const int start=60, //starting speed
        END=130, //ending speed
        incrmt=10; //speed increment
const float convert=0.6214; //conversion factor

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int kph;
    float mph;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<showpoint<<setprecision(1);
    
    //Display Inputs/Outputs
    cout<<"KPH\tMPH"<<endl;
    cout<<"------------"<<endl;
    
    for (kph=start;kph<=END;kph+=incrmt) {
        mph=kph*convert;
        cout<<kph<<"\t"<<mph<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

