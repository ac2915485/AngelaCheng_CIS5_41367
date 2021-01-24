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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int game=1, //game counter
            point, //to hold a number of points
            total=0; //accumulator
    
    //Initialize Variables
    cout<<"Enter the number of points your team has earned so far in the season,"<<endl;
    cout<<"then enter -1 when finished."<<endl;
    cout<<"Enter the points for game"<<game<<": "<<endl;
    cin>>point;
    
    //Map Inputs to Outputs -> Process
    while (point!=-1) {
        total+=point;
        game++;
        cout<<"Enter the points for game "<<game<<": "<<endl;
        cin>>point;
    }
    
    //Display Inputs/Outputs
    cout<<"The total points are "<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

