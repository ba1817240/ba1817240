/*
*   File: main.cpp
*   Author: Brandon Arias
*   Created on January 15, 2016, 7:50 PM
*   Purpose:  Truth Table
*/

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //Output table

    cout << "x | y | !x | !y | x&&y | x||y | x^y | x^y^y | x^y^x | !(x&&y) |"
            " !x||!y | !(x||y) | !x&&!y |" << endl;
    cout << "T | T |  F |  F |  T   |  T   |  T  |   T   |   F   |    F    |"
            "   F    |   F     |   F    |" << endl;
    cout << "T | F |  F |  T |  T   |  T   |  F  |   F   |   T   |    T    |"
            "   F    |   F     |   F    |" << endl;
    cout << "F | T |  T |  F |  T   |  T   |  F  |   F   |   T   |    T    |"
            "   F    |   T     |   F    |" << endl;
    cout << "F | F |  T |  T |  F   |  F   |  F  |   F   |   T   |    T    |"
            "   T    |   F     |   T    |" << endl;
    //End program

    return 0;

}