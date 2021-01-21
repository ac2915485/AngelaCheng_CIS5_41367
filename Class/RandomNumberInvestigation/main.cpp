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
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time library to set random number seed
#include <iomanip>   //Formatting Libary
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Investigate the range of a random number
    int minRand,maxRand,nCalls;
    maxRand=minRand=10000;
    nCalls=2147000000;
    unsigned int maxPos=1<<31;
    maxPos=maxPos-1;
    for(int i=1;i<=nCalls;i++){
        int temp=rand();
        minRand=(temp<minRand?temp:minRand);
        maxRand=(temp>maxRand?temp:maxRand);
    }
    cout<<"Min Random Number = "<<minRand<<endl;
    cout<<"Max Random Number = "<<maxRand<<endl;
    cout<<"Minimum Rand Number = "<<0<<endl;
    cout<<"Max Random should be 2^31-1 = "<<maxPos<<endl;
    
    //Now let us roll the Dice
    cout<<endl<<endl;
    for(int i=1;i<=200;i++){
        int die1,die2,sum;
        die1=rand()%6; //[0,1,2,3,4,5]
        die1=die1+1; //[1,2,3,4,5,6]
        die2=rand()%6+1; //[1,2,3,4,5,6]
        sum=die1+die2;   //[2,...,12]
        cout<<"["<<setw(2)<<die1<<","<<setw(2)<<die2<<","
                <<setw(2)<<sum<<"]"<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}