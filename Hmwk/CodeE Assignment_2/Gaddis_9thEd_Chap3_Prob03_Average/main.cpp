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
    float score, //Test score
            scrSum, //Test score sum
            scrAvg; //Test score average
    char count; //count for the test score
    
    //Initialize Variables
    count=1;
    scrSum=0;
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Input 5 numbers to average."<<endl;
    
    cin>>score;
    scrSum+=score;
    
    cin>>score;
    scrSum+=score;
    
    cin>>score;
    scrSum+=score;
    
    cin>>score;
    scrSum+=score;
    
    cin>>score;
    scrSum+=score;
    
    scrAvg=scrSum/5;
    
    //Display Inputs/Outputs
    cout<<"The average = "<<scrAvg;
    
    //Exit the Program - Cleanup
    return 0;
}

