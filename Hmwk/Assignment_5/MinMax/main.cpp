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
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n1,n2,n3;   //3 numbers for user to input
    int min,max;    //min and max
    
    //Initialize Variables
    min=max=0;
    cout<<"Input 3 numbers\n";
    cin>>n1>>n2>>n3;
    
    //Map Inputs to Outputs -> Process
    minmax(n1,n2,n3,min,max);
    
    //Display Inputs/Outputs
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit the Program - Cleanup
    return 0;
}

void minmax(int num1,int num2,int num3,int&min,int&max)
{
    if (num1<=num2 && num1<=num3)
        min=num1;
    if (num2<=num1 && num2<=num3)
        min=num2;
    if (num3<=num1 && num3<=num2)
        min=num3;
        
    if (num1>=num2 && num1>=num3)
        max=num1;
    if (num2>=num1 && num2>=num3)
        max=num2;
    if (num3>=num1 && num3>=num2)
        max=num3;
}

