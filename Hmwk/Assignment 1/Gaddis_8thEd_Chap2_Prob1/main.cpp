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

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv)

{
    //initialize variables
    int var1 = 50, var2 = 100, total=0;
    
    //Add variables
    total = var1 + var2;
    
    //display results
    cout << "Variable 1 value is: " << var1 << endl;
    cout << "Variable 2 value is: " << var2 << endl;
    cout << "Total of the variables is: " << total << endl;
    
    //End program

    return 0;

}