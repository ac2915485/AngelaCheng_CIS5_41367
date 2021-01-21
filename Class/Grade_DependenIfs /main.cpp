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
    if(score<60) {
        grade='F';
    }else if (score<70) {
        grade='D';
    }else if (score<80) {
        grade='C';
    }else if (score<90) {
        grade='B';
    }else if (score<=100) {
        grade='A';
    }else {
        cout<<"Not Possible"<<endl;
    }
    
    //Display Inputs/Outputs
    cout<<"A score of "<<static_cast<int>(score)<<" is a "<<grade<<" grade!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

