/*
*   File: main.cpp
*   Author: Brandon Arias
*   Created on January 15, 2016, 8:25 PM
*   Purpose:  Lottery Winnings
*/

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float LUMPSUM = 0.62f,  //Lump sum penalty 
            TAX = 0.52f,      //Governments cut of your winnings
            WIFE = 0.50f;     //Yup wife gets half of everything

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{

    //Initialize variables 
    float prize = 0.0f;         //How much is the grand prize?
    float lumpFee = 0.0f;       //Fee for taking lump sum
    float taxFee = 0.0f;        //Fee for taxes...stupid government
    float wifeFee = 0.0f;        //Grumble grumble...
    float ttlWon = 0.0f;        //Total winnings after taxes

    
    //Input/Output
    cout << "Welcome to lottery winnings calculator\n"
             "Please input the Grand Prize and I will tell you\n"
             "what you will pay in taxes and what you will take home!" << endl;
            
    cin >> prize;
     lumpFee = prize * LUMPSUM;
     
     cout << "After the lump sum fee you will have: $" 
          << static_cast<long>(lumpFee) << endl;
     
     taxFee = lumpFee * TAX;
             
     cout << "After taxes you will have: $" 
          << static_cast<long>(taxFee) << endl;
     
      wifeFee = taxFee * WIFE;
             
     cout << "After taxes you will have: $" 
          << static_cast<long>(wifeFee) << endl;
    
    //End program
    return 0;
}