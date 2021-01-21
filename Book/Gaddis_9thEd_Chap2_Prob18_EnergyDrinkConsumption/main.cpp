/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob18_EnergyDrinkConsumption
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
    float cusTtl, //Total customers surveyed
            buy, //Customers that purchased one or more energy drinks per week in Percentage
            citrus, //Customers that prefer citrus-flavored energy drinks
            numBuy; //Number of customers that purchased one or more energy drinks per week
    int numCt; //Number of customers that prefer citrus-flavored energy drinks
    
    //Initialize Variables
    cusTtl=16500;
    buy=15;
    citrus=58;
    
    //Map Inputs to Outputs -> Process
    numBuy=cusTtl*(buy/100);
    numCt=numBuy*(citrus/100);
    
    //Display Inputs/Outputs
    cout<<"Approximately "<<numBuy<<" customers in the survey purchased one or more energy drinks per week."<<endl;
    cout<<"Approximately "<<numCt<<" customers in the survey prefer citrus-flavored energy drinks."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

