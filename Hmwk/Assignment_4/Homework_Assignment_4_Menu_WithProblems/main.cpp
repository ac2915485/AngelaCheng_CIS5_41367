/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 4, 2021, 8:51 PM
 * Purpose: CPP Template
 *          To be copied for each Assignment problem
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float GALPERL=0.264179f;  //There are 0.264179 in a liter

//Function Prototypes
float calcMPG(int gasL, int miles); //Calculates the mileage of your car. Input the gas used (L) and the distance traveled (miles)
float calcInf(float currentPrice, float oldPrice);  // Calculate the inflation rate. Input the current price of an item and then the price of the item one year ago
float calcInf(float currentPrice, float oldPrice); // Calculate the inflation rate
float futurePrice(float currentPrice, float iRate); // Calculate the price of an item one year in the future from the time in question
float max2(float n1, float n2); //Determines the max of the first two numbers the user inputs
float max3(float n1, float n2, float n3); //Determines the max of all three numbers entered

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    int choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis_9thEd_Chap5_Prob01_Sum"<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap5_Prob07_PayInPennies"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"Type 4 for Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap4_Prob01"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap4_Prob02"<<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap4_Prob04"<<endl;
    cout<<"Type 9 for Savitch_9thEd_Chap4_Prob05"<<endl;
    cout<<"Type 10 for Savitch_9thEd_Chap4_Prob09"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1 : {
            //Declare Variables
            int num, //Enter a positive integer number
                    sum=0; //Calculate the sum

            //Initialize Variables
            cin>>num;

            //Map Inputs to Outputs -> Process
            for(int i=1; i<=num; i++) {
                sum+=i;
            }

            //Display Inputs/Outputs
            cout<<"Sum = "<<sum;
        } break;
           
        case 2 : {
            //Declare Variables
            int days,   //days worked
                payDay, //1 penny to be paid per day
                paySum, //daily earning sum
                pennies, //pay earned in pennies
                dollars;  //pay earned in dollars

            //Initialize or input i.e. set variable values
            paySum=0;
            cin>>days;

            //Map inputs -> outputs
            if (days<=0)    //make sure the user entered at least 1 day
            {
                cout<<"Error: Please enter 1 or greater.";
                cin>>days;
            }
            else    //calculate the pay in pennies
                {
                    for (payDay=1; days>=1; days--)
                    {
                        paySum+=payDay;
                        payDay*=2;
                    }
                    dollars=paySum/100;
                    pennies=paySum%100;
                    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;
                }
        }break;
            
        case 3 : {
            //Declare Variables
            int num,
                    max,
                    min;

            //Initialize Variables
            cin>>num;
            min=max=num;

            do {
                if (num<min)
                    min=num;
                if (num>max)
                    max=num;
                cin>>num;
            }while(num!=-99);

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            cout<<"Smallest number in the series is "<<min<<endl;
            cout<<"Largest  number in the series is "<<max;
        } break;
            
        case 4 : {
            //Declare Variables
            int num;
            char letter;

            //Initialize Variables

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            if(cin) {
                cin>>num>>letter;
                if (num>0 && num<=15) {
                    for (int i=1; i<=num; i++) {
                        for (int x=1; x<=num; x++)
                            cout<<letter;
                        if (i!=num)
                            cout<<endl;
                    }
                }
            }
        }  break;
        
        case 5 : {
            //Declare Variables
            int num;    //max number of pluses to show
            char plus='+';
            int length, row;

            //Initialize or input i.e. set variable values
            cin>>num;

            //Map inputs -> outputs
            for (row=1; row<=num; row++)
            {
                for (length=row; length>=1; length--)
                    cout<<plus;
                cout<<endl<<endl;
            }
            for (row=num; row>=1; row--)
            {
                for (length=row; length>=1; length--)
                    cout<<plus;
                if (row==1)
                    break;
                cout<<endl<<endl;
            }
        }  break;
        
        case 6 : {
            //Declare Variables
            int gasL,    //number of liters of gasoline used
                miles;  //number of miles traveled
            float mpg; //mileage in miles/gallon
            char choice;    //do they want to go again? Yes or No

            //Initialize or input i.e. set variable values
            do
            {
                cout<<"Enter number of liters of gasoline:\n"<<endl;
                cin>>gasL;
                cout<<"Enter number of miles traveled:\n"<<endl;
                cin>>miles;

                mpg=calcMPG(gasL,miles);

                cout<<"miles per gallon:\n"
                    <<mpg<<endl;

                //Do they want to go again? Y/y or N/n
                cout<<"Again:\n";
                cin>>choice;

                if (choice=='Y'||choice=='y')
                {
                    mpg=calcMPG(gasL,miles);
                    cout<<endl;
                }
            }
            while (choice=='Y'||choice=='y');
        }  break;
        
        case 7 : {
            //Declare Variables
            int gasL_1, gasL_2,    //number of liters of gasoline used
                miles_1, miles_2;  //number of miles traveled
            float mpg_1, mpg_2; //mileage in miles/gallon
            char choice;    //do they want to go again? Yes or No

            //Initialize or input i.e. set variable values
            do
            {
                //Calculate mpg for first car
                cout<<"Car 1\n";
                cout<<"Enter number of liters of gasoline:\n";
                cin>>gasL_1;
                cout<<"Enter number of miles traveled:\n";
                cin>>miles_1;

                mpg_1=calcMPG(gasL_1,miles_1);

                cout<<"miles per gallon: "
                    <<mpg_1<<endl<<endl;

                //Calculate mpg for second car
                cout<<"Car 2\n";
                cout<<"Enter number of liters of gasoline:\n";
                cin>>gasL_2;
                cout<<"Enter number of miles traveled:\n";
                cin>>miles_2;

                mpg_2=calcMPG(gasL_2,miles_2);

                cout<<"miles per gallon: "
                    <<mpg_2<<endl<<endl;

                //Determine which car is more fuel efficient
                if  (mpg_1>mpg_2)
                    cout<<"Car 1 is more fuel efficient\n"<<endl;
                else if  (mpg_2>mpg_1)
                    cout<<"Car 2 is more fuel efficient\n"<<endl;
                else
                    cout<<"Car 1 and Car 2 are equally efficient\n"<<endl;

                //Do they want to go again? Y/y or N/n
                cout<<"Again:\n";
                cin>>choice;
                if (choice=='Y'||choice=='y')
                    cout<<endl;
                else
                    break;
            }
            while (choice=='Y'||choice=='y');
        }  break;
        
        case 8 : {
            //Declare Variables
            float iRate,    //inflation rate for an item
                curPrice,   //the current price of an item
                oldPrice;   //the old price of an item
            char choice;    //the user can choose to run the program again or to stop

            do
            {
                cout<<"Enter current price:\n";
                cin>>curPrice;
                cout<<"Enter year-ago price:\n";
                cin>>oldPrice;

                iRate=calcInf(curPrice, oldPrice);

                cout<<"Inflation rate: "<<iRate<<"%\n"<<endl;

                //Do they want to go again? Y/y or N/n
                cout<<"Again:\n";
                cin>>choice;
                if (choice=='Y'||choice=='y')
                    cout<<endl;
                else
                    break;
            }
            while (choice=='Y'||choice=='y');
        }  break;
        
        case 9: {
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
        }  break;
        
        case 10: {
            //Declare Variables
            float n1, n2, n3;   //3 numbers to be entered by user
            float max;  //the largest of 2 or 3 numbers

            //Initialize or input i.e. set variable values
            cout<<"Enter first number:\n"<<endl;
            cin>>n1;
            cout<<"Enter Second number:\n"<<endl;
            cin>>n2;
            cout<<"Enter third number:\n"<<endl;
            cin>>n3;

            //Map inputs -> outputs
            max=max2(n1,n2);
            cout<<"Largest number from two parameter function:\n"<<max<<endl;
            max=max3(n1,n2,n3);
            cout<<endl<<"Largest number from three parameter function:\n"<<max<<endl;
        }  break;

        default:
            cout<<"Not an Option"<<endl;

    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}


//Function to calculate the interest rate of an item

float calcMPG(int gasL, int miles)
{
   //Declare Variables
    float gasG;   //number of gallons of gasoline used
    
    //Map inputs -> outputs
    gasG=gasL*GALPERL;  //convert the gas in liters to gas in gallons
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    return(miles/gasG);
}

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

//Find the max of 2 numbers
float max2(float n1, float n2)
{
    float max;
    
    if (n1>n2)
        max=n1;
    else
        max=n2;
    
    return (max);
}

//Find the max of 3 numbers
float max3(float n1, float n2, float n3)
{
    float max;
    
    if (n1>=n2&&n1>=n3)
        max=n1;
    else if (n2>=n1&&n2>=n3)
        max=n2;
    else if (n3>=n1&&n3>=n2)
        max=n3;
    
    return (max);
}

