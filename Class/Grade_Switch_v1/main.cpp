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
    switch (score/10) {
        case 10:
        case 9:grade='A';break;
        case 8:grade='B';break;
        case 7:grade='C';break;
        case 6:grade='D';break;
        default:grade='F';
    }
    
    //Display Inputs/Outputs
    cout<<"A score of "<<static_cast<int>(score)<<" is a "<<grade<<" grade!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

