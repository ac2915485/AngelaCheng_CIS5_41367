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
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void showIntro();
float getCup();
float cup2Oz(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float cup, oz;
    
    //Initialize Variables
    cout<<fixed<<showpoint<<setprecision(1);
    showIntro();
    cup=getCup();
    
    //Map Inputs to Outputs -> Process
    oz=cup2Oz(cup);
    
    //Display Inputs/Outputs
    cout<<cup<<" cups equals "<<oz<<" ounces."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

//The showIntro function displays an introductory screen
void showIntro() {
    cout<<"This program converts measurements in cups to fluid ounces."<<endl;
    cout<<"For your reference the formula is: 1 cup = 8 fluid ounces."<<endl;
}

//The getCup function prompts the user to enter the number of cups and then returns that value as a float
float getCup() {
    float num;
    cout<<"Enter the number of cups: "<<endl;
    cin>>num;
    return num;
}

//The cup2Oz function accepts a number of cups as an argument and returns the equivalent number of fluid ounces as a float
float cup2Oz(float num) {
    return num*8.0;
}