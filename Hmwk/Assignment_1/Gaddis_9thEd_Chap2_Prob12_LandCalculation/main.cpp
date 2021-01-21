/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob12_LandCalculation
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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float acre, //Acre in Unit
            sf, //Square Feet in Unit
            landSf, //Land in Square Feet
            landAc; //Land in Acre
    
    //Initialize Variables
    acre=1;
    sf=43560;
    landSf=391876;
    
    //Map Inputs to Outputs -> Process
    landAc=landSf/sf;
    
    //Display Inputs/Outputs
    cout<<"A tract of land with "<<landSf<<" square feet is quivalent to "<<landAc<<" acres of land."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

