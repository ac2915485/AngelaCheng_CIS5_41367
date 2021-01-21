/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob11_DistansPerTankOfGas
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
    float gasTk, //Number of Gallon for Gas Tank
            mpgTw, //Average Miles per Gallon in Town
            mpgHw, //Average Miles per Gallon on Highway
            disTw, //Distance the car can travel in town
            disHw; //Distance the car can travel on highway
    
    //Initialize Variables
    gasTk=20;
    mpgTw=23.5;
    mpgHw=28.9;
    
    //Map Inputs to Outputs -> Process
    disTw=gasTk*mpgTw;
    disHw=gasTk*mpgHw;
    
    //Display Inputs/Outputs
    cout<<"A car with a "<<gasTk<<"-gallon gas tank averages "<<mpgTw<<" miles per gallon when driven in town, and "<<mpgHw<<" miles per gallow when driven on the highway."<<endl;
    cout<<"On one tank of gas, the car can travel "<<disTw<<" miles in town and "<<disHw<<" miles on the highway."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

