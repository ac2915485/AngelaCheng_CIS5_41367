/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 16, 2021, 8:51 PM
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
    float day1,
            day2,
            day3,
            total;
    
    //Initialize Variables
    cout<<"Enter the sales for day 1."<<endl;
    cin>>day1;
    cout<<"Enter the sales for day 2."<<endl;
    cin>>day2;
    cout<<"Enter the sales for day 3."<<endl;
    cin>>day3;
    
    //Map Inputs to Outputs -> Process
    total=day1+day2+day3;
    
    //Display Inputs/Outputs
    cout<<endl<<"Sales Amounts"<<endl;
    cout<<"-------------"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Day 1: "<<setw(8)<<day1<<endl;
    cout<<"Day 2: "<<setw(8)<<day2<<endl;
    cout<<"Day 3: "<<setw(8)<<day3<<endl;
    cout<<"Total: "<<setw(8)<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

