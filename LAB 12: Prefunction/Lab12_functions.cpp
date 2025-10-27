#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//example 1: function that calculates and returns the sum of t
int add(int num1, int num2){
    int sum = num1 + num2; 
    cout<<"The sum in the function add() is \t"<<sum<<endl;
    return sum;
}

//example 3: C++ Predefine Functions
//function passes two arguments and returns the hypotenuse
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2)+ pow(side2, 2));
}

//function to print result
void printhyp(float s1, float s2, float h){
    cout<<"the hypotenuse of side "<<s1<<" and side "<<s2<< " is "<<h<<"."<<endl;
}
//EXERCISE 
/*

FUNCTION TO COLLECT A # GREATER THAN 0

FUNCTION TO CALCULATE THE DISTANCE OF FOUR POINT

FUNCTION TO PRINT THE RESULT

*/
int posnum(int number){
    while (number <= 0){
        cout<<"Please enter a number greater than 0: "<<endl;
        cin>>number;
    }
    return number;
}

float dist(float x1, float x2, float y1, float y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void printdist(float x1, float x2, float y1, float y2, float dist){
    cout<<"The distance between point ("<<x1<<", "<<y1<<") and point (" <<x2<<", "<<y2<<") is "<<dist<<"."<<endl;
}