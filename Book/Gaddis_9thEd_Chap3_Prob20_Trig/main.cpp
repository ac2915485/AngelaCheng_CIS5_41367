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
#include <cmath>
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
    int angle; //the angle in degrees
    float   sinA,
            cosA,
            tanA;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    
    cin>>angle;
    sinA=sin(angle*3.1415/180);
    cosA=cos(angle*3.1415/180);
    tanA=tan(angle*3.1415/180);
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<") = "<<sinA<<endl;
    cout<<"cos("<<angle<<") = "<<cosA<<endl;
    cout<<"tan("<<angle<<") = "<<tanA<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

