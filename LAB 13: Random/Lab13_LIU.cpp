/*

Susan Liu
Lab 13: Random Variables
Date: October 27th, 2025

*/

#include <iostream>
#include "LAB13_functions.cpp"

using namespace std;
int main(){

    
    cout<<"-------------Example 1: Random Number Generator-------------"<<endl;
    cout<<"Random number: "<<random_number()<<endl;
    cout<<""<<endl;

    cout<<"-------------Example 2: Different Random Number Generated-------------"<<endl;
    int diff_random = different_random();
    cout<<"Different random number: "<<diff_random<<endl;
    cout<<""<<endl;

    cout<<"-------------Example 3: Random Number within 0 to 9-------------"<<endl;
    int r_0_9 = random_0_9();
    cout<<"Random number between 0 and 9: "<<r_0_9<<endl;
    cout<<""<<endl;
    
    cout<<"-------------Example 4: Random Number within -10 to 5-------------"<<endl;
    int r_neg10_5 = random_neg10_5();
    cout<<"Random number between -10 and 5: "<<r_neg10_5<<endl;
    cout<<""<<endl;

    cout<<"--------------------Exercise-----------------------"<<endl;
    int run1 = random_num1_6();//callc function to generate number from 1 to 6
    int run2 = random_num1_6();//call function to generate number from 1 to 6
    cout<<"Random INT 1: "<<run1<<endl;
    cout<<"Random INT 2: "<<run2<<endl;

    bool result = compare_ones(run1, run2);

    print_congrats(result);
    cout<<""<<endl;
    return 0;
}