/*
SUSAN LIU
LAB 2: Operators
Date: September 3rd, 2025
*/
#include <iostream>
using namespace std;

int main()
{
    cout<< "------- Example 1: Arithmetic Operators -------" << endl;
    //set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    //Calculate the heihgt of a free falling object
    //free_fall = 0.5 * g * time * time
    //declare variables; constant variable for gravity; float for time and height
    const float GRAVITY = 9.8;
    float time = 0, height = 0;
    //collect falling time
    cout << "Enter the falling time (in seconds): ";
    cin >> time;
    //calculate height for free fall object
    height = 0.5 * GRAVITY * time * time;
    //print results
    cout << "The height of the free fall object is " <<height<< " meters." << endl;
    cout<<""<< endl;
    return 0;
}
