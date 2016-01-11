/*
 * File:   main.cpp
 * Author: Brandon Arias
 * Created on January 9, 2016, 9:45 PM
 * Purpose: Calculate sales tax
 */

//System Libraries

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
    const float PURCH = 95.00f; //$95.00 purchase
    const float COTAX = 2e-2f; //2% County tax
    const float STTAX = 4e-2f; //4% State tax
    
//Function prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{

    //Declare and initialize variables

    float coTtl = 0.00f, stTtl = 0.00, gndTtl = 0.00;
    
    //Output
    //Display purchase total
    cout << "Purchase total is: $" 
         << setprecision(2) << fixed //Set precision 2 decimal places
         << PURCH << endl;
    
    //Calculate total of purchase and county tax
    coTtl = PURCH * COTAX;
    
    //Display county tax total
    cout << "County sales tax is: $" << coTtl << endl;
    
    //Calculate total purchase and state tax
    stTtl = PURCH * STTAX;
    
    //Display state tax total
    cout << "State tax is: $" << stTtl << endl;
    
    //Calculate grand total (state, county and purchase)
    gndTtl = PURCH + coTtl + stTtl;
    
    //Display Grand total
    cout << "Grand total is: $" << gndTtl << endl;
    //End program

    return 0;

}