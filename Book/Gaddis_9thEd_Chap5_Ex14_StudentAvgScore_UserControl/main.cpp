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
    int numStu, //number of students
            numTest; //number of tests per student
    float total, //accumulator for total score
            avg; //average test score
    
    //Initialize Variables
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"This program averages test scores."<<endl;
    cout<<"For how many students do you have scores?"<<endl;
    cin>>numStu;
    
    cout<<"How many test scores does each student have?"<<endl;
    cin>>numTest;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    for (int student=1; student<=numStu; student++) {
        total=0;  //initialize the accumulator
        for (int test=1; test<=numTest; test++) {
            float score;
            cout<<"Enter score "<<test<<" for student "<<student<<": "<<endl;
            cin>>score;
            total+=score;
        }
        avg=total/numTest;
        cout<<"The average score for student "<<student<<" is "<<avg<<"."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

