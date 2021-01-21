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
#include <string>
using namespace std;

//User Libraries


//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string play1,
            play2,
            R,
            P,
            S;
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>play1;
    cin>>play2;
    
    //Map Inputs to Outputs -> Process
    if ((play1=="R"||play1=="r")&&(play2=="P"||play2=="p")) {
        cout<<"Paper covers rock.";
    }
    if ((play1=="R"||play1=="r")&&play2=="S") {
        cout<<"Rock breaks scissors.";
    }
    if ((play1=="R"||play1=="r")&&(play2=="R"||play2=="r")) {
        cout<<"Nobody wins.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="R"||play2=="r")) {
        cout<<"Paper covers rock.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="S"||play2=="s")) {
        cout<<"Scissors cuts paper.";
    }
    if ((play1=="P"||play1=="p")&&(play2=="P"||play2=="p")) {
        cout<<"Nobody wins.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="R"||play2=="r")) {
        cout<<"Rock breaks scissors.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="P"||play2=="p")) {
        cout<<"Scissors cuts paper.";
    }
    if ((play1=="S"||play1=="s")&&(play2=="S"||play2=="s")) {
        cout<<"Nobody wins.";
    }
    
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}

