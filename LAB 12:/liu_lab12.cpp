/*
Susan Liu
LAB 12: Intro to Arrays
Date: Oct. 29th, 2025
*/

#include <iostream>
#include <string>
#include "Lab12_functions.cpp"

using namespace std;
int main(){
    cout<<"\n------------------Example 1: Local Variables ------------------"<<endl;
    int sum = add(3, 7) + add(1, 6); //sum is local variable 
    cout<<"The total sum in main() is \t"<<sum<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 2: Global Variables ------------------"<<endl;
    cout<<"Num original value is \t"<<num<<endl;
    dosomething();
    num = 5;
    cout<<"The num in the main() = \t"<<num<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 3: Hypotenuse------------------"<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hypotenuse(s1, s2);
    printhyp(s1, s2, h);
    cout<<""<<endl;
    return 0;
}