/*
LAB 14: Intro to array, pointers, and references

Susan Liu
November 12th, 2025

*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "Lab15_Functions_LIU.cpp"
 
int main() {
    cout<<"----------------------Example 1: Pointers-----------------------"<<endl;
    pointer_ref();
    cout<<""<<endl;

    cout<<"----------------------Example 2: Pointers and References in a function-----------------------"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);
    cout<<""<<endl;

    cout<<"----------------------Example 3:Array-----------------------"<<endl;
    cout<<""<<endl;
    
    cout<<"----------------------Example 4: Array Sizes-----------------------"<<endl;
    cout<<""<<endl;

    cout<<"----------------------Example 5: Loop in an Array-----------------------"<<endl;
    cout<<""<<endl;

    cout<<"----------------------Exercise: Pointer Array-----------------------"<<endl;
    return 0;
}