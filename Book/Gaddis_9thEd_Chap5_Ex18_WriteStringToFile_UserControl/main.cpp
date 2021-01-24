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
    ofstream outputFile;
    string name1,
            name2, 
            name3;
    outputFile.open("Friends.txt");
    
    //Initialize Variables
    cout<<"Enter the names of three friends."<<endl;
    cout<<"Friend #1: ";
    cin>>name1;
    cout<<"Friend #2: ";
    cin>>name2;
    cout<<"Friend #3: ";
    cin>>name3;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    outputFile<<name1<<endl;
    outputFile<<name2<<endl;
    outputFile<<name3<<endl;
    cout<<"The names were saved to a file."<<endl;
    
    //Exit the Program - Cleanup
    outputFile.close();
    return 0;
}

