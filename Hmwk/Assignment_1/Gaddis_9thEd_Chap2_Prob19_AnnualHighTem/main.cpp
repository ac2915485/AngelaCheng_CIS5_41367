/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob19_AnnualHighTem
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
    float temN, //Temperature in New York
            temD, //Temperature in Denver
            temP, //Temperature in Phoenix
            rise, //Temperature rise in Percentage
            nTemN, //New temperature in New York
            nTemD, //New temperature in Denver
            nTemP; //New temperature in Phoenix
    
    //Initialize Variables
    temN=85;
    temD=88;
    temP=106;
    rise=2;
    
    //Map Inputs to Outputs -> Process
    nTemN=temN*(1+rise/100);
    nTemD=temD*(1+rise/100);
    nTemP=temP*(1+rise/100);
    
    //Display Inputs/Outputs
    cout<<"The original average July high temperature is"<<endl;
    cout<<"New York: "<<temN<<" degrees Fahrenheit"<<endl;
    cout<<"Denver: "<<temD<<" degrees Fahrenheit"<<endl;
    cout<<"Phoenix: "<<temP<<" degrees Fahrenheit"<<endl<<endl;
    cout<<"If temperatures rise by "<<rise<<" percent, the new average July high temperature would be"<<endl;
    cout<<"New York: "<<nTemN<<" degrees Fahrenheit"<<endl;
    cout<<"Denver: "<<nTemD<<" degrees Fahrenheit"<<endl;
    cout<<"Phoenix: "<<nTemP<<" degrees Fahrenheit"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

