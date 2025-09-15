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
    int n = 5;
    if (n>0){
        if (n%2==0){
            cout<<"The number is positive and even"<<endl;
        }
        else{
            cout<<"The number is positive and odd"<<endl;
        }
    }
    else if(n<0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<""<<endl;

    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"------------LAB 6 AFTER CLASS HW ASSIGNMENT------------"<<endl;

    cout<<""<<endl;

    return 0;
}