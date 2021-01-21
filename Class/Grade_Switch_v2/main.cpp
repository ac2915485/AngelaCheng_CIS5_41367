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
    switch (score) {
        case 100:case 99: case 98: case 97: case 96: case 95: case 94: case 93: case 92: case 91: case 90:grade='A';break;
        case 89: case 88: case 87: case 86: case 85: case 84: case 83: case 82: case 81: case 80:grade='B';break;
        case 79: case 78: case 77: case 76: case 75: case 74: case 73: case 72: case 71: case 70:grade='C';break;
        case 69: case 68: case 67: case 66: case 65: case 64: case 63: case 62: case 61: case 60:grade='D';break;
        default:grade='F';
    }
    
    //Display Inputs/Outputs
    cout<<"A score of "<<static_cast<int>(score)<<" is a "<<grade<<" grade!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

