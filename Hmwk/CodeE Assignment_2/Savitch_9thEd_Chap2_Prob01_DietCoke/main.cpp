/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 11, 2021, 8:51 PM
 * Purpose: Savage | Sums and Average
 *          Note: Using the ternary operator
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float weight,
            sugar;
    int can;
    
    //Initialize Variables
    sugar=185.135;
    
    //Map Inputs to Outputs -> Process
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>weight;
    
    //Final Calculation
    can=sugar*weight;
    
    //Display Inputs/Outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<can<<" cans";
    
    //Exit the Program - Cleanup
    return 0;
}

