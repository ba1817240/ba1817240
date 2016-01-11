/*
 * File:   main.cpp
 * Author: Brandon Arias
* Created on January 11, 2016, 12:47 AM
 * Purpose: Ocean Levels
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
static float RAISE = 1.5f;

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv)

{
    //Calculate level in 5 years and display answer
    cout << "Ocean level in 5 years will be " << RAISE * 5
         << "mm higher than current level." << endl;
    
    //Calculate level in 7 years and display answer
    cout << "Ocean level in 7 years will be " << RAISE * 7 
         << "mm higher than current level." << endl;
    
    //Calculate level in 10 years and display answer
    cout << "Ocean level in 10 years will be " << RAISE * 10 
         << "mm higher than current level." << endl;
    
    //End program
    return 0;
}