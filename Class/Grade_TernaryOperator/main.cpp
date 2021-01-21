/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 14, 2021, 8:51 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment problem
 */

/*
 *This is a block comment
 */

//System Libraries
#include <iostream> //I/O Library
#include <cstdlib>  //Random Fundtion
#include <ctime>    //Time to set seed
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char grade;  //Grade A, B, C, D, F
    unsigned char score;  //Numeric value from 0 to 100
    
    //Initialize Variables
    score=rand()%51+50;  //Score inclusive range[50,100]
    
    //Map Inputs to Outputs -> Process
    grade=(score<60)?'F':
          (score<70)?'D':
          (score<80)?'C':
          (score<90)?'B':'A';
    
    //Display Inputs/Outputs
    cout<<"A score of "<<static_cast<int>(score)<<" is a "<<grade<<" grade!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

