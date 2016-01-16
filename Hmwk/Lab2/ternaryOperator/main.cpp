/*
*   File: main.cpp
*   Author: Brandon Arias
*   Created on January 15, 2016, 9:27 PM
*   Purpose:  Ternary Operator
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

    //Initialize variables 
    int score = 0;
    

    
    //Input/Output
    cout << "Enter your score" << endl;
    
    cin >> score;
    
    string grade 
            =(score >= 90) ? "A"   //90+ = A
            :(score >= 80) ? "B"   //80+ = B
            :(score >= 70) ? "C"   //70+ = C
            :(score >= 60) ? "D"   //60+ = D
            : "F";                 //59- = F
    
    cout << "Your grade is: " << grade << endl;
    
    //End program
    return 0;
}