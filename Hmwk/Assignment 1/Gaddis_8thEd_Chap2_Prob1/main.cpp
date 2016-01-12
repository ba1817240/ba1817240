/*
 * File:   main.cpp
 * Author: Brandon Arias
 * Created on January 10, 2016, 3:36 PM
 * Purpose:Add 2 numbers store result
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const int VAR1 = 50, VAR2 = 100;
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv)
{    
    //Declare variables
    int total=0;
    
    //Add variables
    total = VAR1 + VAR2;
    
    //display results
    cout << "Variable 1 value is: " << VAR1 << endl;
    cout << "Variable 2 value is: " << VAR2 << endl;
    cout << "Total of the variables is: " << total << endl;
    
    //End program
    return 0;
}