/*
Susan Liu
Lab 14: Intro to array, pointers, and references
*/
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    //declare the pointers here
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    //testing memory address
    cout<<"memory address of int"<<pointerint<<endl;

    //pointer with initial value. Value is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    //check reference value of each pointer
    cout<<"Reference value int = "<<pointerint<<endl;
    cout<<"Reference value char = "<<pointerchar<<endl;
    cout<<"Reference value string = "<<pointerstring<<endl;

    // dereference operators
    cout<<"Dereference value of int ="<<*pointerint<<endl;
    cout<<"Dereference value of char ="<<*pointerchar<<endl;
    cout<<"Dereference value of string ="<<*pointerstring<<endl;
}