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
const float ADULT=40.0,
        CHILD=20.0,
        SENIOR=30.0;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int choice, //menu choice
            month; //number of months
    float charge; //monthly charges
    
    //Initialize Variables
    cout<<fixed<<showpoint<<setprecision(2);
    
    do {
        cout<<"\t\tHealth Club Membership Menu\t\t"<<endl;
        cout<<"1. Standard Adult Membership"<<endl;
        cout<<"2. Child Membership"<<endl;
        cout<<"3. Senior Citizen Membership"<<endl;
        cout<<"4. Quit the Program"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        
        while (choice<adultCh || choice>quitCh) {
            cout<<"Please enter a valid menu choice:"<<endl;
            cin>>choice;
        }
        
        if (choice!=quitCh) {
            cout<<"For how many months?"<<endl;
            cin>>month;
        
            switch (choice) {
                case adultCh:
                    charge=month*ADULT;
                    break;
                case childCh:
                    charge=month*CHILD;
                case seniorCh:
                    charge=month*SENIOR;
            }

            cout<<"The total charges are $"<<charge<<endl;
        }
        
    } while (choice !=quitCh);
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

