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
    cout<<"----------------------Example 2: Pointer Array-----------------------"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);
    cout<<""<<endl;
    return 0;
}