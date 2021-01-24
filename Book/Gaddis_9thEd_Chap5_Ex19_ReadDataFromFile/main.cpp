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
#include <string>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    ifstream inputFile;
    string name;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    inputFile.open("Friends.txt");
    cout<<"Reading data from the file."<<endl;
    
    inputFile>>name;
    cout<<name<<endl;
    
    inputFile>>name;
    cout<<name<<endl;
    
    inputFile>>name;
    cout<<name<<endl;
    
    //Exit the Program - Cleanup
    inputFile.close();
    return 0;
}

