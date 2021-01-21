/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 6, 2021, 8:51 PM
 * Purpose: ScratchPad
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
    int decimalA=353;
    int decimalB=3*16*16+5*16+3;
    int decimalC=3*8*8+5*8+3;
    int decimalD=1*2*2+1*2+1;
    int octal=0353;
    int hex=0x353;
    char binary=0b111; //Check ASCII Code to find machine language 
    char binaryA=0b01000001;
    string str="Hello World";
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Decimal                   = "<<decimalA<<endl;
    cout<<"octal                     = "<<octal<<endl;
    cout<<"decimalC (same as octal)  = "<<decimalC<<endl;
    cout<<"hex                       = "<<hex<<endl;
    cout<<"decimalB (same as hex)    = "<<decimalB<<endl;
    cout<<"binary                    = "<<binary<<endl;
    cout<<"decimalD (same as binary) = "<<decimalD<<endl;
    cout<<"        computers are binary"<<endl<<endl;
    
    cout<<"binary = "<<binaryA<<endl;
    cout<<"binary = "<<static_cast<int>(binaryA)<<endl<<endl;
    
    cout<<str<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

