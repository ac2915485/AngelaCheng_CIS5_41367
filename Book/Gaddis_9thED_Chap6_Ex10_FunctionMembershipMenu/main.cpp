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
const int adultCh=1,
        childCh=2,
        seniorCh=3,
        quitCh=4;
const float adult=40.0,
        child=20.0,
        senior=30.0;

//Function Prototypes
void showMenu();
void showFee(float, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int choice, month;
    
    //Initialize Variables
    cout<<fixed<<showpoint<<setprecision(2);
    
    do {
        showMenu();
        cin>>choice;
        
        while (choice<adultCh || choice>quitCh) {
            cout<<"Please enter a valid menu choice: "<<endl;
            cin>>choice;
        }
        if (choice!= quitCh) {
            cout<<"For how many months?"<<endl;
            cin>>month;
            switch (choice) {
                case adultCh: 
                    showFee(adult, month);
                    break;
                case childCh: 
                    showFee(child, month);
                    break;
                case seniorCh:
                    showFee(senior, month);
            }
        }
    } while (choice != quitCh);
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

//Definition of function showMenu which displays the menu.
void showMenu() {
    cout<<"\t\tHealth Club Membership Menu"<<endl<<endl;
    cout<<"1. Standard Adult Membership"<<endl;
    cout<<"2. Child Membership"<<endl;
    cout<<"3. Senior Citizen Membership"<<endl;
    cout<<"Enter your choice: ";
}

//Definition of function showFee. The memberRate parameter holds the monthly membership rate and the month parameter holds the numer of month
void showFee(float mbRate, int month) {
    cout<<"The total charges are $"<<(mbRate*month)<<endl;
}

