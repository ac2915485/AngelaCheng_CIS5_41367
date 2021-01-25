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
#include <cmath>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n; //number inputted by the user
    
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>n;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<n<<(isPrime(n)?" is prime.":" is not prime.");
    
    //Exit the Program - Cleanup
    return 0;
}

//Function to determine if a number is prime
bool isPrime(int n)
{
    if (n<2)
        return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return false;
    return true;
}

