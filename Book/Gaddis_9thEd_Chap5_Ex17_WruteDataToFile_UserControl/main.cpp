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
#include <fstream>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    ofstream outputFile;
    int num1,
            num2,
            num3;
    outputFile.open("Numbers.txt");
    
    //Initialize Variables
    cout<<"Enter a number: "<<endl;
    cin>>num1;
    cout<<"Enter another number: "<<endl;
    cin>>num2;
    cout<<"One more time. Enter a number: "<<endl;
    cin>>num3;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    outputFile<<num1<<endl;
    outputFile<<num2<<endl;
    outputFile<<num3<<endl;
    cout<<"The numbers were saved to a file."<<endl;
    
    //Exit the Program - Cleanup
    outputFile.close();
    cout<<"Done."<<endl;
    return 0;
}

