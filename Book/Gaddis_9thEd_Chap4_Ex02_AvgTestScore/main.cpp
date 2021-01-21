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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const int HIGH=95;
    int score1,
            score2,
            score3;
    float avg;
    
    //Initialize Variables
    cout<<"Enter 3 test scores and I will average them: "<<endl;
    cin>>score1;
    cin>>score2;
    cin>>score3;
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(1)<<showpoint;
    avg=(score1+score2+score3)/3;
    
    //Display Inputs/Outputs
    cout<<"Your average is "<<avg<<endl;
    
    if (avg>HIGH) {
        cout<<"Congratulations! That's a high score!"<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

