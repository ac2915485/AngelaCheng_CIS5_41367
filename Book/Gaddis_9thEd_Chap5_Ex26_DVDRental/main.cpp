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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int dvdCnt=1, //DVD counter
            numDVD; //number of DVD rented
    float total=0.0; //accumulator
    char current; //current release, y or n
    
    //Initialize Variables
    cout<<"How many DVDs are being rented?"<<endl;
    cin>>numDVD;
    
    //Map Inputs to Outputs -> Process
    do {
        if((dvdCnt%3)==0) {
            cout<<"DVD #"<<dvdCnt<<" is free!"<<endl;
            continue;
        }
        cout<<"Is DVD #"<<dvdCnt<<" a current release? (Y/N)"<<endl;
        cin>>current;
        if (current=='Y' || current=='y')
            total+=3.50;
        else
            total+=2.50;
    }while (dvdCnt++<numDVD);
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total is $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

