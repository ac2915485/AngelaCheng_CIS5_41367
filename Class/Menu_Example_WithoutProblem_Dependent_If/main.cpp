/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 16, 2021, 8:51 PM
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
    char choice;
    
    //Initialize Variables
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Savitch Diet Coke Problem"<<endl;
    cout<<"Type 2 for Gaddis Trig Problem"<<endl;
    cout<<"Type 3 for Savitch Sums Problem"<<endl;
    cin>>choice;
    
    //Map Inputs to Outputs -> Process
    if(choice=='1') {
        cout<<"Place Diet Coke Problem Here"<<endl;
    } else if (choice=='2') {
        cout<<"Place Trig Problem Here"<<endl;
    } else if (choice=='3') {
        cout<<"Place Sums Problem Here"<<endl;
    } else {
        cout<<"Not an Option"<<endl;
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

