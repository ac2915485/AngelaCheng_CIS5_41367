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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    const float ADULT=40.0,
            SENIOR=30.0,
            CHILD=20.0;
    
    const int ADULT_CHOICE=1,
            CHILD_CHOICE=2,
            SENIOR_CHOICE=3,
            QUIT=4;
    
    int choice,
            month;
    float charge;
    
    //Initialize Variables
    cout<<"Health Club Membership Menu"<<endl;
    cout<<"1. Standard Adult Membership"<<endl;
    cout<<"2. Child Membership"<<endl;
    cout<<"3. Senior Citizen Membership"<<endl;
    cout<<"4. Quit the Program"<<endl;
    cout<<"Enter your choice."<<endl;
    cin>>choice;
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    if (choice==ADULT_CHOICE) {
        cout<<"For how many months?"<<endl;
        cin>>month;
        charge=month*ADULT;
        cout<<"The total charges are $"<<charge<<endl;
    } else if (choice==CHILD_CHOICE) {
        cout<<"For how many months?"<<endl;
        cin>>month;
        charge=month*CHILD;
        cout<<"The total charges are $"<<charge<<endl;
    } else if (choice==SENIOR_CHOICE) {
        cout<<"For how many months?"<<endl;
        cin>>month;
        charge=month*SENIOR;
        cout<<"The total charges are $"<<charge<<endl;
    } else if (choice==QUIT) {
        cout<<"Program ending."<<endl;
    } else {
        cout<<"The valid choices are 1 through 4. Run the program again and select one of those."<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}

