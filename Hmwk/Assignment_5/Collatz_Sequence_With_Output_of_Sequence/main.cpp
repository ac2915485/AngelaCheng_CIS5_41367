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
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int collatz(int);//3n+1  sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<collatz(n)<<" steps";
    
    //Exit the Program - Cleanup
    return 0;
}

//Collatz Sequence
int collatz(int n)
{
 int i;
 for (i=1;n!=1;i++)
 {
    cout<<n;
    if (n%2!=0)
        n=3*n+1;
    else if (n%2==0)
        n/=2;
    cout<<", ";
 }
 cout<<n<<endl;
 return i;
}

