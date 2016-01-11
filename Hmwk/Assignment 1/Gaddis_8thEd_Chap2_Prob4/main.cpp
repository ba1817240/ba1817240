/*
 * File:   main.cpp
 * Author: Brandon Arias
 * Created on January 10, 2016, 4:32 PM
 * Purpose: Restaurant Bill
 */

//System Libraries

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
    const float MEAL = 88.67f; //88.67
    const float TAX = 6.75e-2; //6.75%
    const float TIP = 20e-2f;  //20%
    
//Function prototypes

//Execution Begins Here

int main(int argc, char** argv)

{  
    //initialize variables
    float taxTtl = 0.00f, mealTip = 0.00f, gndTtl = 0.00f;

    //Display meal cost
    cout << "Meal cost: $" << MEAL << endl;
    
    //Calculate tax of meal
    taxTtl = MEAL * TAX;
    
    //Display total tax
    cout << "Tax:       $" 
         << setprecision(2) << fixed //Set precision 2 decimal places
         << taxTtl << endl;
    
    //Calculate tip of meal
    mealTip = TIP * MEAL;
    
    //Display tip based on 20% of meal cost
    cout << "Tip:       $" << mealTip << endl;
    
    //Calculate grand total
    gndTtl = taxTtl + mealTip + MEAL;
    
    //Display grand total of meal, tax, and tip
    cout << "Tax Total  $" << gndTtl << endl;

    //End program
    return 0;
}