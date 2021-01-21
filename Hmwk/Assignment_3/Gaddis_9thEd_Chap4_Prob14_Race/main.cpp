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
    float time1,
            time2,
            time3;
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>name1;
    cin>>time1;
    cin>>name2;
    cin>>time2;
    cin>>name3;
    cin>>time3;
    
    //Map Inputs to Outputs -> Process
    if (time1<time2 && time2<time3) {
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3);
    }
    if (time1<time3 && time3<time2) {
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3);
    }
    if (time2<time1 && time1<time3) {
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3);
    }
    if (time2<time3 && time3<time1) {
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3);
    }
    if (time3<time1 && time1<time2) {
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3);
    }
    if (time3<time2 && time2<time1) {
        cout<<name3<<"\t"<<setw(3)<<time3<<setw(3)<<endl;
        cout<<name2<<"\t"<<setw(3)<<time2<<setw(3)<<endl;
        cout<<name1<<"\t"<<setw(3)<<time1;
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

