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
const float VLIGHT=3e5f;//Velocity of light in km/sec
const float CNVMIN=60;//Conversion from sec to minutes
const float CNVHRS=60;//Conversion from min to hours
const float CNVDAYS=24;//Conversion from hrs to days
const float CNVYRS=365;//Conversion from days to years
const float CNVKMM=1/1.61;//Conversion from km to miles
const float TRILLIN=1e12f;//Conversion to trillions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float distMls;//Distance to star in miles
    float distLyr;//Distance to star in light years
    float vEscape;//Velocity to escape solar system km/sec
    float tArrive;//Time to arrive in Years
    
    //Initialize Variables
    cout<<"Input distance to star in light years"<<endl;
    cin>>distLyr;
    vEscape=42.1;//From Wikipedia  42.1 km/sec
    
    //Process or map Inputs to Outputs
    distMls=distLyr*VLIGHT*CNVMIN*CNVHRS*CNVDAYS*CNVYRS*CNVKMM;
    tArrive=distLyr*VLIGHT/vEscape;
    
    //Display Outputs
    cout<<distLyr<<" light years = "
            <<distMls/TRILLIN<<" trillion miles"<<endl;
    cout<<"Time to arrive = "<<tArrive<<" years"<<endl;
    
    //Exit stage right!
    return 0;
}

