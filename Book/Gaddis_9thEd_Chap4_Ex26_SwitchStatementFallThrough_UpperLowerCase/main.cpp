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
    char feedGrd; //the grade of feed
    
    //Initialize Variables
    cout<<"Our pet food is available in three grades:"<<endl;
    cout<<"A, B, and C. Which one you want pricing for?"<<endl;
    cin>>feedGrd;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    switch (feedGrd) {
        case 'a':
        case'A':
            cout<<"30 cents per pound."<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"20 cents per pound."<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"15 cents per pound."<<endl;
            break;
        default: 
            cout<<"That is an invalid choice"<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

