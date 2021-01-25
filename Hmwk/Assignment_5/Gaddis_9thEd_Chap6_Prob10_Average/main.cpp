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
void getScre(int &,int &,int &,int &,int &);  //User inputs five scores to five variables
float calcAvg(int,int,int,int,int);  //Calculate and display the average of the four highest scores
int fndLwst(int,int,int,int,int);  //Find and return the lowest of five test scores

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
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
    
    //Exit the Program - Cleanup
    return 0;
}

//Get 5 test scores
void getScre(int &score1,int &score2,int &score3,int &score4,int &score5)
{
    cout<<"Input the 5 test scores.\n";
    cin>>score1>>score2>>score3>>score4>>score5;
}

//Calculate and display the average of the four highest scores
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

//Find and return the lowest of five test scores
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

