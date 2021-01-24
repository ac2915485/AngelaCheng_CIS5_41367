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
    outputFile.open("demofile.txt");
    
    //Initialize Variables
    cout<<"Now writing data to the file."<<endl;
    
    //Map Inputs to Outputs -> Process
    outputFile<<"Bach"<<endl;
    outputFile<<"Beethoven"<<endl;
    outputFile<<"Mozart"<<endl;
    outputFile<<"Schubert"<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    outputFile.close();
    cout<<"Done."<<endl;
    return 0;
}

