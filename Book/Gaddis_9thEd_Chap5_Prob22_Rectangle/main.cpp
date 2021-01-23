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
    int num;
    char letter;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    if(cin) {
        cin>>num>>letter;
        if (num>0 && num<=15) {
            for (int i=1; i<=num; i++) {
                for (int x=1; x<=num; x++)
                    cout<<letter;
                if (i!=num)
                    cout<<endl;
            }
        }
    }
    
    //Exit the Program - Cleanup
    return 0;
}

