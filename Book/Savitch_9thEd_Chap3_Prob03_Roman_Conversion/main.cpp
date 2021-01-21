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
    int integer,
            number,
            piece;
    string roman;
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>integer;
    number=integer-10;
    
    //Map Inputs to Outputs -> Process
    if (integer>=3000 || integer<=1000) {
        cout<<integer<<" is Out of Range!";
    } 
    else {
        if (integer>=1000) {
            piece=integer/1000;
            for (int i=0;i<piece;i++) {
                roman+='M';
            }
            integer%=1000;
        }
        if (integer>=100) {
            piece=integer/100;
            if (piece==9) {
                roman+="CM";
            } 
            else if (piece>=5) {
                roman+='D';
                for (int i=0;i<piece-5;i++) {
                    roman+='C';
                }
            }
            else if (piece==4) {
                roman+="CD";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='C';
                }
            }
            integer%=100;
        }
        if (integer>=10) {
            piece=integer/10;
            if (piece==9) {
                roman+="XC";
            }
            else if (piece>=5) {
                roman+='L';
                for(int i=0;i<piece-5;i++) {
                    roman+='X';
                }
            }
            else if (piece==4) {
                roman+="XL";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='X';
                }
            }
            integer%=10;
        }
        if (integer>=1) {
            piece=integer;
            if (piece==9) {
                roman+="IX";
            }
            else if (piece>=5) {
                roman+='V';
                for(int i=0;i<piece-5;i++) {
                    roman+='I';
                }
            }
            else if (piece==4) {
                roman+="IV";
            }
            else if (piece>=1) {
                for(int i=0;i<piece;i++) {
                    roman+='I';
                }
            }
            integer%=1;
        }
        cout<<number+10<<" is equal to "<<roman;
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

