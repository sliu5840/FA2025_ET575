/*

Susan Liu
Lab 13: Random Variables
Date: October 27th, 2025

*/
#include <iostream>
#include <cstdlib>
using namespace std;

//function to return a random number
int random_number(){
    return rand();
}

//example 2: different random number
int different_random(){
    srand(time(0)); //seed the random number generator with current time
    return rand();
}

//example 3: random number within a range
int random_0_9(){
    return rand()%10; //random number between 0 and 9
}

//example 4: specific range of random number
int random_neg10_5(){
    return -10 + rand()%16; //random number between -10 and 5
}
//EXXERCISE
//Function to genereate a random number between 1 and 6
int random_num1_6(){
    return 1 + rand()%6;
}

//function to compare if 2 numbers are 1s
bool compare_ones(int run1, int run2){
    if (run1 == 1 && run2 ==1){
        return true;
    }
    else{
        return false;
    }
}

//Function to print CONGRATS if both numbers are 1s, or BETTER LUCK NEXT TIME otherwise
void print_congrats(bool result){
    if (result){
        cout<<"CONGRATS!!!"<<endl;
    }
    else{
        cout<<"BETTER LUCK NEXT TIME :(("<<endl;
    }
}