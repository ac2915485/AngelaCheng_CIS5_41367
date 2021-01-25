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
//Case 1
void minmax(int,int,int,int&,int&);//Function to find the min and max
//Case 2 
int fctrl(int);//Function to write for this problem
//Case 3
bool isPrime(int);//Determine if the input number is prime.
//Case 4
int collatz(int);//3n+1 sequence
//Case 5
int collatz(int);//3n+1 sequence
//Case 6
void getInput(int& hour,int& min,char& amPM,int& wait);
void showTime(int hour, int min, char amPM);
void endTime(int& hour,int& min,char& amPM, int&wait);
//Case 7 
void getInput(int& hour,int& min);
void showTime(int hour, int min);
void showTime(int hour, int min, char amPM);
char cnvtTime(int& hour,int& min);
//Case 8
float psntVal(float futVal,float rate,int years);
//Case 9
void getScre(int &,int &,int &,int &,int &);  //User inputs five scores to five variables
float calcAvg(int,int,int,int,int);  //Calculate and display the average of the four highest scores
int fndLwst(int,int,int,int,int);  //Find and return the lowest of five test scores

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    int choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Problem MinMax"<<endl;
    cout<<"Type 2 for Problem Factorial"<<endl;
    cout<<"Type 3 for Problem IsPrime"<<endl;
    cout<<"Type 4 for Problem Collatz Sequence"<<endl;
    cout<<"Type 5 for Problem Collatz Sequence With Output Of Sequence"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap5_Prob12"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap5_Prob01_TimeConverter"<<endl;
    cout<<"Type 8 for Gaddis_9thEd_Chap6_Prob09_PresentValue"<<endl;
    cout<<"Type 9 for Gaddis_9thEd_Chap6_Prob10_Average"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1 : {
            //Declare Variables
            int n1,n2,n3;   //3 numbers for user to input
            int min,max;    //min and max

            //Initialize Variables
            min=max=0;
            cout<<"Input 3 numbers\n";
            cin>>n1>>n2>>n3;

            //Map Inputs to Outputs -> Process
            minmax(n1,n2,n3,min,max);

            //Display Inputs/Outputs
            cout<<"Min = "<<min<<endl;
            cout<<"Max = "<<max;
        } break;
           
        case 2 : {
            //Declare Variables
            int n;  //number input by user - will calculate factorial of this number

            //Initialize Variables
            cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\n";
            cout<<"Input the number for the function.\n";
            cin>>n;

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            cout<<n<<"! = "<<fctrl(n);
        }break;
            
        case 3 : {
            //Declare Variables
            int n; //number inputted by the user

            //Initialize Variables
            cout<<"Input a number to test if Prime.\n";
            cin>>n;

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            cout<<n<<(isPrime(n)?" is prime.":" is not prime.");
        } break;
            
        case 4 : {
            //Declare Variables
            int n;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;

            //Process/Map inputs to outputs
            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    collatz(n)<<" steps";
        }  break;
        
        case 5 : {
            //Declare Variables
            int n,ns;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;

            //Process/Map inputs to outputs
            ns=collatz(n);

            //Output data
            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    ns<<" steps";
        }  break;
        
        case 6 : {
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
        }  break;
        
        case 7 : {
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
        }  break;
        
        case 8 : {
            //Declare Variables
            float fValue, intRate; //future value of an account and the interest rate used to get there
            int nYears; //number of years money will sit in the account
            float pValue;   //present value of the account needed to achieve future value

            //Initialize Variables
            cout<<"This is a Present Value Computation\n";
            cout<<"Input the Future Value in Dollars\n";
            cin>>fValue;
            cout<<"Input the Number of Years\n";
            cin>>nYears;
            cout<<"Input the Interest Rate %/yr\n";
            cin>>intRate;

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            pValue=psntVal(fValue,intRate,nYears);
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            cout<<"The Present Value = $"<<pValue;
        }  break;
        
        case 9: {
            //Declare Variables
            int test1, test2, test3, test4, test5; //scores for five tests
            float avg; //average score of the 4 tests with the highest scores

            //Initialize Variables
            cout<<"Find the Average of Test Scores\n"
                <<"by removing the lowest value.\n";
            getScre(test1,test2,test3,test4,test5);

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            calcAvg(test1,test2,test3,test4,test5);
        }  break;

        default:
            cout<<"Not an Option"<<endl;

    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}

//Case 1
void minmax(int num1,int num2,int num3,int&min,int&max)
{
    if (num1<=num2 && num1<=num3)
        min=num1;
    if (num2<=num1 && num2<=num3)
        min=num2;
    if (num3<=num1 && num3<=num2)
        min=num3;
        
    if (num1>=num2 && num1>=num3)
        max=num1;
    if (num2>=num1 && num2>=num3)
        max=num2;
    if (num3>=num1 && num3>=num2)
        max=num3;
}

//Case 2
int fctrl(int n)
{
    int fact; //to hold value of factorial of n
    fact=1;
    
    for (int i=1;i<=n;i++)
        fact*=i;
    return fact;
}

//Case 3
bool isPrime(int n)
{
    if (n<2)
        return false;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return false;
    return true;
}

//Case 4 
int collatz (int n)
{
    int i;
    for (i=1;n!=1;i++)
    {
        if (n%2!=0)
            n=3*n+1;
       else if (n%2==0)
            n/=2;
    }
    return i;
}

//Case 5
//Duplicate

//Case 6
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

//Case 7
void getInput(int& hour,int& min)
{
    cin>>hour;
    cin.get();
    cin>>min;
    if (hour>24||min>59)
        cout<<hour<<":"<<min<<" is not a valid time\n";
}
void showTime(int hour, int min)
{
    cout<<fixed;
    cout.fill('0');
    
    cout<<setw(2)<<hour<<":"<<setw(2)<<min;
}
//Duplicate
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

//Case 8
float psntVal(float futVal,float rate,int years)
{
    rate/=100;
    return futVal/pow(1+rate,years);
}

//Case 9
void getScre(int &score1,int &score2,int &score3,int &score4,int &score5)
{
    cout<<"Input the 5 test scores.\n";
    cin>>score1>>score2>>score3>>score4>>score5;
}
float calcAvg(int score1,int score2,int score3,int score4,int score5)
{
    int lScore; //lowest score of 5 tests
    float avg; //average score of the 4 tests with the highest scores
    
    lScore=fndLwst(score1,score2,score3,score4,score5);
    if (score1==lScore)
        avg=(score2+score3+score4+score5)/4.0;
    else if (score2==lScore)
        avg=(score1+score3+score4+score5)/4.0;
    else if (score3==lScore)
        avg=(score1+score2+score4+score5)/4.0;
    else if (score4==lScore)
        avg=(score1+score2+score3+score5)/4.0;
    else if (score5==lScore)
        avg=(score1+score2+score3+score4)/4.0;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<"The average test score = "<<avg;
}
int fndLwst(int tst1,int tst2,int tst3,int tst4,int tst5)
{
    if (tst4>tst5)
    {
        short temp=tst4;
        tst4=tst5;
        tst5=temp;
    }
    if (tst3>tst4)
    {
        short temp=tst3;
        tst3=tst4;
        tst4=temp;
    }
    if (tst2>tst3)
    {
        short temp=tst2;
        tst2=tst3;
        tst3=temp;
    }
    if (tst1>tst2)
    {
        short temp=tst1;
        tst1=tst2;
        tst2=temp;
    }
    
    return tst1;
}

