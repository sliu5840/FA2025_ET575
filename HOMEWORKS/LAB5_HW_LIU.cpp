/*

design a control flow to set a GPA according to the following:

grade: between 100 and 90, GPA = A
grade: between 89 and 80, GPA = B
grade: between 79 and 70, GPA = C
grade: between 69 and 60, GPA = D
grade: below 59, GPA = F
any another grade, GPA = ""
The grade is calculated with the formula below:

grade = final_exam *0.5 + labs*0.3 + homework*0.2

The final exam, labs, and homework grade are collected from the keyboard.

The program should prompt the result as:

A final grade of ______ is equivalent to a GPA of _____

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //declare variables
    float final = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    string GPA = "Z";

    //collect values
    cout<<"Enter your final exam grade (0-100): "<<endl;
    cin>>final;

    cout<<"Enter your labs grade (0-100): "<<endl;
    cin>>labs;

    cout<<"Enter your Homework grade (0-100): "<<endl;
    cin>>homework;
    cout<<""<<endl;

    //calculate grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = final*0.5 + labs*0.3 + homework*0.2;
    cout<<"Your final numerical grade is "<<grade<<endl;
    int grade1 = int (grade); 
    cout<<""<<endl;

    //multiway statement 
    if ( 100 >= grade1 && grade1 >= 90){
        GPA = "A";
    }
    else if ( 89 >= grade1 && grade1 >= 80){
        GPA ="B";
    }
    else if ( 79 >= grade1 && grade1 >= 70){
        GPA = "C";
    }
    else if ( 69 >= grade1 && grade1>= 60){
        GPA = "D";
    }
    else if ( grade1 <= 59){
        GPA = "F";
    }
    else {
        GPA = "n/a ";
    }
    cout <<"A final grade of "<< grade<<" is equivalent to a GPA of "<< GPA <<endl;
    return 0;

}