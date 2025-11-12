/*
LAB15 Functions Page
*/
#include <iostream>
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

//example 2
//functions passes a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
}

//function that passes a reference
void printbyreference(string& v){
    cout<<"Passed by reference = \t"<<v<<endl;
    v = "Updated Sentence";
}

//function that passes a memory address
void printaddress(string* v){
    cout<<"Pass memory address  = \t"<<v<<endl;

}