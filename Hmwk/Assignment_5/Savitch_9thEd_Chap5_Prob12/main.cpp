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
void getInput(int& hour,int& min,char& amPM,int& wait);
//Input the variables for hours and minutes of current time
//and for AM or PM. Input the wait time in minutes.
//The variables will be set to user input.
void showTime(int hour, int min, char amPM);
//Input time info in hours, mins, and AM or amPM
//The requested time will be output
void endTime(int& hour,int& min,char& amPM, int&wait);
//Current time info and waiting time (in minutes) are Input
//The variables will be changed to the end time after the wait

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int hours, mins;  //hours and minutes for current time
    char aP;    //am or pm for current time
    int wTime;  //the wait time in minutes
    char again; //User may choose to repeat the process
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    do
    {
        getInput(hours,mins,aP,wTime);
        cout<<"Current time = ";
        showTime(hours,mins,aP);
        endTime(hours,mins,aP,wTime);
        cout<<"Time after waiting period = ";
        showTime(hours,mins,aP);
        cout<<endl<<"Again:\n";
        cin>>again;
        if (again=='y'||again=='Y')
            cout<<endl;
    }
    while (again=='y'||again=='Y');
    
    //Exit the Program - Cleanup
    return 0;
}


//Get the current time
void getInput(int& hour,int& min,char& amPM,int& wait)
{
    cout<<"Enter hour:\n"<<endl;
    cin>>hour;
    cout<<"Enter minutes:\n"<<endl;
    cin>>min;
    cout<<"Enter A for AM, P for PM:\n"<<endl;
    cin>>amPM;
    cout<<"Enter waiting time:\n"<<endl;
    cin>>wait;
}

//Display the time
void showTime(int hour, int min, char amPM)
{
    cout<<fixed;
    cout.fill('0');
    
    cout<<setw(2)<<hour<<":"<<setw(2)<<min;
    if (amPM=='a'||amPM=='A')
        cout<<" AM\n";
    if (amPM=='p'||amPM=='P')
        cout<<" PM\n";
}

//Calculate the time that the waiting will be over
void endTime(int& hour,int& min,char& amPM, int&wait)
{
    int wHour, wMin;  //the wait time in hours and in remaining minutes
    
    wMin=wait%60;   //calculate the remaining minutes to wait
    min+=wMin;
    if (min>=60)
    {
        min-=60;
        hour++;
    }
    
    wHour=wait/60;  //calculate the number of hours to wait
    hour+=wHour;
    if (hour>=12)
    {
        hour-=12;
        if (amPM=='a'||amPM=='A')
            amPM='P';
        else if (amPM=='p'||amPM=='P')
            amPM='A';
    }
    if (hour==0)
        hour=12;
}

