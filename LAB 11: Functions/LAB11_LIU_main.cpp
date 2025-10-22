/*
Susan Liu
LAB 11: Intro to Functions
Date: Oct. 22nd, 2025
*/
#include <iostream>
#include <string>
#include "LAB11_functions.cpp"

using namespace std;

int main(){
    cout<<"\n------------------Example 1: Void Functions ------------------"<<endl;
    printhello();
    printhello();
    printhello();
    cout<<""<<endl;

    cout<<"\n------------------Example 2: Void Functions with Parameters ------------------"<<endl;
    greetings("Pookie");
    string username = "Princess";
    greetings(username);
    cout<<""<<endl;

    cout<<"\n------------------Example 3: Function with An Integer Value------------------"<<endl;
    int savefive = returnfive();
    cout<<"The returning value from the function is: "<<savefive<<endl;
    savefive += 2;
    cout<<"The returning value after +2 is: "<<savefive<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 4: Code After the Return ------------------"<<endl;
    printsone();
    int n = somenumber();
    cout<<"Some number \t "<<n<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 5: Calculate Area of A Square ------------------"<<endl;
    float area_square = areasquare(2.5);
    cout<<"The area of a square with 2.5 side length is "<<area_square<<endl;
    cout<<""<<endl;


    cout<<"\n------------------Example 6: Product of Two Numbers ------------------"<<endl;
    int p = product(2, 3 );
    cout<<"The prodduct is: "<<p<<endl;
    cout<<""<<endl;

    cout<<"\n------------------Example 7: Calculate Fahrenheit When Given Celcius  ------------------"<<endl;
    double temp = fah(12.5);
    //cout<<"The temperature is "<<temp<<" fahrenheit."<<endl;
    printfah(temp);
    cout<<""<<endl;

    cout<<"\n------------------Example 8: Check Number ------------------"<<endl;
    string numy = checknumber(5);
    cout<<"The number 3 is "<<numy<<endl;
    printnumber(numy);
    cout<<""<<endl;


    cout<<"\n------------------LAB 11 ACTIVITY ------------------"<<endl;
    /*
    Define two functions:

    one function that will check if a number is even. 
    The function should have a parameter that requests an integer number to check and return a bool value. 
    The argument for the function is collected from the main() function. 
    Hint: use if-else statement within the function to check if a number is even. 

    one function to print the result as Is ___ even? ____ 
    where the first blank is the check number, and the second blank is the 
    return value from the first function.
    */
    bool check = EOD(9);
    cout<<"The number is "<<check<<endl;
    printeod(0); 







    return 0;

}

