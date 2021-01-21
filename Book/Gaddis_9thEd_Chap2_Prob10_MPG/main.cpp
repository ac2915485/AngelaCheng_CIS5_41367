/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob10_MPG
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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int gl, //Gallons of Gasoline
        mile, //Miles Traveled
        mpg; //Miles per Gallons the Car Gets
    
    //Initialize Variables
    gl=15;
    mile=375;
    
    //Map Inputs to Outputs -> Process
    mpg=mile/gl;
    
    //Display Inputs/Outputs
    cout<<"A car holds "<<gl<<" gallons of gasoline and can travel "<<mile<<" miles before refueling."<<endl;
    cout<<"The car gets "<<mpg<<" miles per gallon."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

