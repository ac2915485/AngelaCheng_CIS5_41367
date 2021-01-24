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
    int days; //number of days
    float total=0.0; //accumulator, initialized with 0
    
    //Initialize Variables
    cout<<"For how many days do you have sales amount?"<<endl;
    cin>>days;
    
    //Map Inputs to Outputs -> Process
    for (int count=1; count<=days; count++) {
        float sales;
        cout<<"Enter the sales for day "<<count<<": "<<endl;
        cin>>sales;
        total+=sales; //accumulate the running total
    }
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total sales are $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

