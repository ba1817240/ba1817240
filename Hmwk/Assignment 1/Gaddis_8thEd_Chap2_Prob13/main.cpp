/*
 * File:   main.cpp
 * Author: Brandon Arias
  * Created on January 11, 2016, 3:33 AM
 * Purpose: Circuit Board Price
 */

//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants
const float PROFIT = 35e-2f, COST = 14.95f;

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv)
{    
    //Declare variables
    float markUp = 0.00, total = 0.00;
    
    //Calculate markup
    markUp = COST * PROFIT;
          
    //Display markup
    cout << "Cost of circuit board is: $" 
         << setprecision(2) << fixed //Set precision 2 decimal places
         << COST << endl;
    cout << "Markup is: $" << markUp << endl;
    
    //Calculate total
    total = markUp + COST;
    //Display total
    cout << "Total is: $" << total << endl;
    
    //End program
    return 0;
}