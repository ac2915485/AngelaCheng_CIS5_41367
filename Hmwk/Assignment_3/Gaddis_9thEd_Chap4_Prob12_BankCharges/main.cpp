/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 15, 2021, 8:51 PM
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
    float balance,
            check,
            monthly;
    
    //Initialize Variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance;
    cin>>check;
    
    monthly=10.00;
    
    //Map Inputs to Outputs -> Process
    if (balance>=400) {
        if (check<20) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.1<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.1-monthly;
        } else if (check>=20&&check<40) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.08<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.08-monthly;
        } else if (check>=40&&check<60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.06<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.06-monthly;
        } else if (check>=60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.04<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $     0.00"<<endl;
            cout<<"New Balance $   "<<balance-check*0.04-monthly;
        }
    } else {
        if (check<20) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.1<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.1-monthly-15;
        } else if (check>=20&&check<40) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.08<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.08-monthly-15;
        } else if (check>=40&&check<60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.06<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.06-monthly-15;
        } else if (check>=60) {
            cout<<"Balance     $   "<<balance<<endl;
            cout<<"Check Fee   $     "<<check*0.04<<endl;
            cout<<"Monthly Fee $    "<<monthly<<endl;
            cout<<"Low Balance $    15.00"<<endl;
            cout<<"New Balance $    "<<balance-check*0.04-monthly-15;
        }
    }
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

