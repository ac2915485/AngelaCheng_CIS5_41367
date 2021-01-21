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
    const float COST_CUFT=0.23;
    const float CHRG_CUFT=0.5;
    
    float length, //The crate's length
            width, //The crate's width
            height, //The crate's height
            volume, //The volume of crate
            cost, //The cost to build the crate
            charge, //The customer charge for the crate
            profit; //The profit made on the crate
    
    //Initialize Variables
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Enter the dimensions of the crate (in feet): "<<endl;
    cout<<"Length: "<<endl;
    cin>>length;
    cout<<"Width: "<<endl;
    cin>>width;
    cout<<"Height"<<endl;
    cin>>height;
    
    //Map Inputs to Outputs -> Process
    volume=length*width*height;
    cost=volume*COST_CUFT;
    charge=volume*CHRG_CUFT;
    profit=charge-cost;
    
    //Display Inputs/Outputs
    cout<<"The volume of the crate = "<<volume<<" cubic feet."<<endl;
    cout<<"Cost to build = $"<<cost<<endl;
    cout<<"Charge to customer = $"<<charge<<endl;
    cout<<"Profit = $"<<profit<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

