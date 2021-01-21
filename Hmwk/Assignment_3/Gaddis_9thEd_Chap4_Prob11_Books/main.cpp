/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 15, 2021, 8:51 PM
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
    int book;
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>book;
    
    //Map Inputs to Outputs -> Process
    if (book==0) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   =  0";
    } else if (book==1) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   =  5";
    } else if (book==2) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 15";
    } else if (book==3) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 30";
    } else if (book>=4) {
        cout<<"Books purchased =  "<<book<<endl;
        cout<<"Points earned   = 60";
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

