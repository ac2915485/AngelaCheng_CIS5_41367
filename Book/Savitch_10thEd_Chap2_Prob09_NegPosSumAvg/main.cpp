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
    float   number, //10 numbers to input the program
            totSum, // tot represent total
            totAvg,
            negSum, // neg represent the negative
            negAvg,
            posSum, // pos represent the positive
            posAvg;
    
    //Initialize Variables
    totSum=totAvg=negSum=negAvg=posSum=posAvg=0; //Important initialization 
    cout<<"This program sums and averages 10 floating numbers"<<endl;
    cout<<"with 2 significant digits of accuracy"<<endl;
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 10 numbers with no more than 2 decimal places"<<endl;
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
    totAvg=totSum/10.0f;
    posAvg=posSum/10.0f;
    negAvg=negSum/10.0f;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total sum    = "<<setw(10)<<totSum<<endl;
    cout<<"The positive sum = "<<setw(10)<<posSum<<endl;
    cout<<"The negative sum = "<<setw(10)<<negSum<<endl;
    cout<<"The total avg    = "<<setw(10)<<totAvg<<endl;
    cout<<"The positive avg = "<<setw(10)<<posAvg<<endl;
    cout<<"The negative avg = "<<setw(10)<<negAvg<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

