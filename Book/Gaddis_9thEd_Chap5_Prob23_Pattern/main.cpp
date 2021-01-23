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
    //Set the random number seed
    
    //Declare Variables
    int num;    //max number of pluses to show
    char plus='+';
    int length, row;
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    for (row=1; row<=num; row++)
    {
        for (length=row; length>=1; length--)
            cout<<plus;
        cout<<endl<<endl;
    }
    for (row=num; row>=1; row--)
    {
        for (length=row; length>=1; length--)
            cout<<plus;
        if (row==1)
                break;
        cout<<endl<<endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

