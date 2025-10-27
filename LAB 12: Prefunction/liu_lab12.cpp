/*
Susan Liu
LAB 12: Intro to Arrays
Date: Oct. 29th, 2025
*/

#include <iostream>
#include <string>
#include <cmath>
#include "Lab12_functions.cpp"

int num = 8; //global variable
void dosomething(){
    //global variable num can be used and changed here
    num += 10;
    cout<<"The num in the function dosomething() = \t"<<num<<endl;
}

using namespace std;
int main(){
    cout<<"\n------------------Example 1: Local Variables ------------------"<<endl;
    int sum = add(3, 7) + add(1, 6); //sum is local variable 
    cout<<"The total sum in main() is \t"<<sum<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 2: Global Variables ------------------"<<endl;
    cout<<"num original value is \t"<<num<<endl; 
    dosomething();
    num = 5;
    cout<<"The num in the main() = \t"<<num<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 3: Hypotenuse------------------"<<endl;
    float s1 = 3;
    float s2 = 4;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);
    cout<<""<<endl;

    cout<<"------------------LAB 12 EXERCISE------------------"<<endl;
    //create functions to calculate distance between four points
    float x1 = posnum(0);
    float y1 = posnum(0);
    float x2 = posnum(0);
    float y2 = posnum(0);

    float distance = dist(x1, x2, y1, y2);
    printdist(x1, x2, y1, y2, distance);
    cout<<""<<endl;
    return 0;
}