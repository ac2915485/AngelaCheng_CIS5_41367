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
#include <string>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string name1,
            name2,
            name3;
    
    //Initialize Variables
    string str[3],temp;
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    for(int i=0;i<3; ++i) {
        getline(cin,str[i]);
    }
    for(int i=0;i<3;++i)
        for(int j=i+1; j<3; ++j) {
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2];
    
    
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

