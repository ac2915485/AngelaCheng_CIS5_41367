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
void getInput(int& hour,int& min);
//Input the variables for hours and minutes of current time
//The variables will be set to user input.
void showTime(int hour, int min);
//Input time info in hours, mins, and AM or amPM
//The requested time will be output in military format (i.e. 13:33)
void showTime(int hour, int min, char amPM);
//Input time info in hours, mins, and AM or amPM
//The requested time will be output in standard format (i.e. 1:33 PM)
char cnvtTime(int& hour,int& min);
//Input military time
//Will convert the hours and mins to standard time and return AM or PM

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int hours, mins;  //hours and minutes for current time
    char aP;    //am or pm for current time
    char again; //User may choose to repeat the process
    
    //Initialize Variables
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    do
    {
        getInput(hours,mins);
        if (hours<=24&&mins<=59)
        {
            showTime(hours,mins);
            cout<<" = ";
            aP=cnvtTime(hours,mins);
            showTime(hours,mins,aP);
        }
        cout<<"Would you like to convert another time (y/n)\n";
        cin>>again;
    }
    while (again=='y'||again=='Y');
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

//Get the current time in military format
void getInput(int& hour,int& min)
{
    cin>>hour;
    cin.get();
    cin>>min;
    if (hour>24||min>59)
        cout<<hour<<":"<<min<<" is not a valid time\n";
}

//Display the time in military format
void showTime(int hour, int min)
{
    cout<<fixed;
    cout.fill('0');
    
    cout<<setw(2)<<hour<<":"<<setw(2)<<min;
}

//Display the time in standard format
void showTime(int hour, int min, char amPM)
{
    cout<<fixed;
    cout.fill('0');
    
    cout<<hour<<":"<<setw(2)<<min;
    if (amPM=='a'||amPM=='A')
        cout<<" AM\n";
    if (amPM=='p'||amPM=='P')
        cout<<" PM\n";
}

//convert military hours and mins to standard time and return AM or PM
char cnvtTime(int& hour,int& min)
{
    char amPM;
    
    if (hour>=12&&hour<=24)
    {
        hour-=12;
        amPM='P';
    }
    else
        amPM='A';
    if (hour==0)
        hour=12;
    
    return amPM;
}

