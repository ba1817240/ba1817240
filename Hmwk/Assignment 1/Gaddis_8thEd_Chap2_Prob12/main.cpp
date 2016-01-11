/*
 * File:   main.cpp
 * Author: Brandon Arias
 * Created on January 11, 2016, 2:18 AM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const long int ACRE = 43560;
const double TRACT = 391876;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv)
{    
    //Initialize variable
    float numbTrt = 0.00f;
    
    //Calculate # of acres in tract
    numbTrt = TRACT / ACRE;
    
    //Display number of acres in tract
    cout << "There are "
         << setprecision(3) << fixed //Set precision 3 decimal places
         << numbTrt << " acres in " << setprecision(0) << TRACT
         << " square feet" << endl;
    
    //End program
    return 0;
}