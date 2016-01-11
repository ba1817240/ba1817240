/*
 * File:   main.cpp
 * Author: Brandon Arias
 * Created on January 11, 2016, 3:56 AM
 * Purpose: Miles per Gallon
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants
const int MILES = 375, TANK = 15;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv)
{    
    //Declare variables
    int mpg = 0;
    
    //Display Constant variables
    cout << "Gallons of gas used: " << TANK << endl
         << "Miles driven: " << MILES <<endl;
    
    //Calculate MPG
    mpg = MILES / TANK;
    
    //Display MPG
    cout << "Car gets " << mpg << " miles per gallon" << endl;
    
    
    //End program
    return 0;
}