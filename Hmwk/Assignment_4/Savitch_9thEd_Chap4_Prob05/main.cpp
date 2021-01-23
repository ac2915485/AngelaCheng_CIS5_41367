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
float calcInf(float currentPrice, float oldPrice); // Calculate the inflation rate
float futurePrice(float currentPrice, float iRate); // Calculate the price of an item one year in the future from the time in question

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float iRate,    //inflation rate for an item
        curPrice,   //the current price of an item
        oldPrice;   //the old price of an item
    float price1yr, price2yr;   //future prices of an item, based on current inflation rate
    char choice;    //the user can choose to run the program again or to stop
    
    do
    {
        cout<<"Enter current price:\n";
        cin>>curPrice;
        cout<<"Enter year-ago price:\n";
        cin>>oldPrice;
        
        //Call calcInf function to calculate the inflation rate
        iRate=calcInf(curPrice, oldPrice);
        cout<<"Inflation rate: "<<iRate<<"%\n"<<endl;
        
        /*Call futurePrice function to determine the price of an item 1 and 2 years
        * in the future based on current inflation rate*/
        price1yr=futurePrice(curPrice, iRate);
        cout<<"Price in one year: $"<<price1yr<<endl;
        price2yr=futurePrice(price1yr, iRate);
        cout<<"Price in two year: $"<<price2yr<<endl;
        
        //Do they want to go again? Y/y or N/n
        cout<<endl<<"Again:\n";
        cin>>choice;
        if (choice=='Y'||choice=='y')
            cout<<endl;
        else
            break;
    }
    while (choice=='Y'||choice=='y');
    
    //Exit stage right or left!
    return 0;
}

//Function to calculate the interest rate of an item
float calcInf(float currentPrice, float oldPrice)
{
    float iRate;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    iRate=(currentPrice-oldPrice)/oldPrice;
    return(iRate*100);
}

//Calculate the price of an item one year in the future
float futurePrice(float currentPrice, float iRate)
{
    float futurePrice;
    
    iRate/=100;
    futurePrice=currentPrice+currentPrice*iRate;
    return(futurePrice);
}


