/*
*   File: main.cpp
*   Author: Brandon Arias
*   Created on January 15, 2016, 10:54 PM
*   Purpose:  Independent If Statements
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
    string grade;

    
    //Input/Output
    cout << "Enter your score" << endl;
    
    cin >> score;
    
    if (score >= 90)
    {
        grade = "A";
    }
    else
        
    if (score >= 80)
    {
        grade = "B";
    }
    else 
        
    if (score >= 70)
    {
        grade = "C";
    }
    else
        
    if (score >= 60)
    {
        grade = "D";
    }
    else
    {
        grade = "F";
    }
    cout << "Your grade is: " << grade << endl;
    
    //End program
    return 0;
}