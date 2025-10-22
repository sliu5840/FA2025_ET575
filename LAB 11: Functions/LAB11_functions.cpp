/*
Susan Liu
LAB 11: Intro to Functions
Date: Oct. 22nd, 2025
*/
#include <iostream>
using namespace std;

//void function does not return any value
void printhello(){
    cout<<"Hello function!"<<endl;
    return;
}

//void function with parameters
void greetings(string name){
    cout<<"Good Afternoon, "<<name<<"!"<<endl;
    return;
}



//example 3: function that returns an integer value (whole number)
int returnfive(){
    return 5;
}



//example 4: any code after the return will not be executed
void printsone(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

int somenumber(){
    int num = 10;
    return num;
    num *=2;
    return num;
}



//example 5: function that calculates and returns the area of a sqquare
float areasquare(float side){
    float area = side*side;
    return area;
}



//example 6, function that calculates and returns the product of 2 numbers
int product(int n1, int n2){
    return n1 * n2;
}



//example 7: function that calculates and returns the fahrenheit value given celsius
double fah(double celcius){
    return (celcius*1.8) + 32;
}

void printfah(double temp){
    cout<<"The fahrenheit temp is "<<temp<<endl;
    //if you want to have cl in function file and not in main cl
}



//example 8:  function that checks if number is positive, negative or zero
string checknumber(int number){
    if (number == 0){
        return "zero";
    }
    else if (number>0){
        return "positive";
    }
    else{
        return "negative";
    }
}

void printnumber(string checknumber){
    cout<<"The number is "<<checknumber<<endl;
}

//LAB 11 ACTIVITY: Check If Number Is Even or Odd
bool EOD(int number){
    if (number ==0 || number %2 ==0){
        return true;
    }

    else{
        return false;
    }
}

void printeod(int number){
    cout<<"Is "<<number<< " even? "<<EOD<<endl;
}