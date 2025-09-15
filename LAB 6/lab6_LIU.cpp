/*
SUSAN LIUI
SEPTEMBER 15TH, 2025
LAB 6:
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"\n-------Example 1: nested conditional statement-------"<<endl;
    int n = -8;
    if (n>0){
        if (n%2==0){
            cout<<"The number is positive and even"<<endl;
        }
        else{
            cout<<"The number is positive and odd"<<endl;
        }
    }
    else if(n<0){
        if(n%2==0){
            cout<<"The number is negative and even"<<endl;
        }
        else{
            cout<<"The number is negative and odd"<<endl;
        
        }
    }
    else{
        cout<<"The number is zero"<<endl;
    }
    cout<<""<<endl;


    cout<<"\n-------Example 2:organize three numbers in decreasing order-------"<<endl;
    //declare the identifiers (variable names)
    int num1, num2, num3;//or u can also divide them into 3 lines as: int num1; int num2; int num3;

    //display msg to user and collect the 3 integers
    cout<<"Enter three integers: "<<endl;
    cin>>num1>>num2>>num3;
    cout<<""<<endl;

    //compare if num1 is > than num2 and num3
    if (num1>num2 && num1>num3){
        cout<<"Num1 is the largest integer"<<endl;
    }
    else if (num2>num1 && num2>num3){
        cout<<"Num2 is the largest integer"<<endl;
    }
    else if (num3>num2 && num3>num1){
        cout<<"Num3 is the largest integer"<<endl;
    }
    else{
        cout<<"The integers are all equal"<<endl;
    }
    cout<<""<<endl;


    cout<<"\n-------Example 3: Switch Statement-------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"------------LAB 6 AFTER CLASS HW ASSIGNMENT------------"<<endl;

    cout<<""<<endl;

    return 0;
}