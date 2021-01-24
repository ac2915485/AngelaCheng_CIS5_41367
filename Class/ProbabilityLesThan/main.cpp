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
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Need the power function
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float rndProb();//Random Number Between [0,1]
bool  isLess(float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    int cnt,nLoops;
    float prob=1.0f/3.0f;
    cnt=0;
    nLoops=10000000;
    
    for(int i=1;i<=nLoops;i++){
        cnt+=isLess(prob);
    }
    cout<<"prob = "<<prob*100<<
          "%  Simulated prob = "<<
            100.0f*cnt/nLoops<<"%"<<endl;
        

    //Exit stage right!
    return 0;
}

bool  isLess(float prob){
    if(prob>=rndProb())return true;
    return false;
}

float rndProb(){
    return 1.0f*rand()/(pow(2,31)-1);
}

