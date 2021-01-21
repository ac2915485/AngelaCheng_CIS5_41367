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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int begInv, //Beginning inventory for all stores
            sold, //Number of widgets sold
            store1, //Store 1' inventory
            store2, //Store 2's inventory
            store3; //Store 3's inventory
    
    //Initialize Variables
    cout<<"One week ago, 3 new widget stores opened"<<endl;
    cout<<"at the same time with the same beginning"<<endl;
    cout<<"inventory. What was the beginning inventory?"<<endl;
    cin>>begInv;
    
    store1=store2=store3=begInv;
    
    //Map Inputs to Outputs -> Process
    cout<<"How many widgets has store 1 sold?"<<endl;
    cin>>sold;
    store1-=sold; //Adjust store 1's inventory
    
    cout<<"How many widgets has store 2 sold?"<<endl;
    cin>>sold;
    store2-=sold; //Adjust store 2's inventory
    
    cout<<"How many widgets has store 3 sold?"<<endl;
    cin>>sold;
    store3-=sold; //Adjust store 3's inventory
    
    //Display Inputs/Outputs
    cout<<endl<<"The current inventory of each store: "<<endl;
    cout<<"Store 1: "<<store1<<endl;
    cout<<"Store 2: "<<store2<<endl;
    cout<<"Store 3: "<<store3<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

