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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const int A_SCORE=90,
            B_SCORE=80,
            C_SCORE=70,
            D_SCORE=60;
    
    int score;
    
    //Initialize Variables
    cout<<"Enter your numeric test score and I will tell you the letter grade you earned."<<endl;
    cin>>score;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    if (score>=A_SCORE) {
        cout<<"Your grade is A."<<endl;
    } else {
        if (score>=B_SCORE) {
            cout<<"Your grade is B."<<endl;
        } else {
            if (score>=C_SCORE) {
                cout<<"Your grade is C."<<endl;
            } else {
                if (score>=D_SCORE) {
                    cout<<"Your grade is D."<<endl;
                } else {
                    cout<<"Your grade is F."<<endl;
                }
            }
        }
    }
    
    //Exit the Program - Cleanup
    return 0;
}

