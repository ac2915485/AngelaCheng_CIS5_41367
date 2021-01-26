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
const float PI=3.14159;

//Function Prototypes
float getRad();
float squr(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float radius, area;
    
    //Initialize Variables
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"This program calculates the area of a circle."<<endl;
    radius=getRad();
    
    //Map Inputs to Outputs -> Process
    area=PI*squr(radius);
    
    //Display Inputs/Outputs
    cout<<"The area is "<<area<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

//This function asks the user to enter the radius of the circle and then returns that number as a float
float getRad() {
    float rad;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>rad;
    return rad;
}

//This function accepts a float argument and returns the square of the argument as a float
float squr(float num) {
    return num*num;
}