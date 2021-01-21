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
    int   number, //10 numbers to input the program
            totSum, // tot represent total
            negSum, // neg represent the negative
            posSum; // pos represent the positive
    
    //Initialize Variables
    totSum=0;
    negSum=0;
    posSum=0; //Important initialization 
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    //Final Calculation
    totSum=posSum+negSum;
    
    //Display Inputs/Outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl<<"Positive sum ="<<setw(4)<<posSum<<endl<<"Total sum    ="<<setw(4)<<totSum;

    
    //Exit the Program - Cleanup
    return 0;
}

