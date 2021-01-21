/* 
 * File:   main.cpp
 * Author: angela
 *
 * Created on January 5, 2021, 8:51 PM
 * Purpose: Gaddis_9thEd_Chap2_Prob02_SalesPrediction
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
    float total, //Total sales of the company
            perEC, //Percentage of total sales from East Coast sales division
            ttlEC; //Sales from East Coast sales division
    
    //Initialize Variables
    total=8.6;
    perEC=58;
    
    //Map Inputs to Outputs -> Process
    ttlEC=8.6*(perEC/100);
    
    //Display Inputs/Outputs
    cout<<"If the company has $"<<total<<" million in sales this year, the East Coast division will generate $"<<ttlEC<<" million in sales."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

