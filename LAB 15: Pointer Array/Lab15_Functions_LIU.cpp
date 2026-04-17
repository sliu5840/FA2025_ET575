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

//example 5: Loop in an array
void looparray(){
    string names[] = {"Annie", "Peter", "Carl", "charles", "Brian"};
    int sizenames = sizeof(names)/sizeof(names[0]);
    for(int i = 0; i<sizenames; i++){
        cout<<names[i]<<"\t"<<endl;
        //count how many names has 5+ chars
        if (names[i].length() >=5){
            coy
            counter++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<< counter<<" names with 5+ characters!"<<endl;
}

//Exercise
void exercise(){
    //declare an array w/ 5 values
    int scores[5];
    
    //assigning/accessing individual cells in an array
    scores[0] = 60;
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    //set max score
    int maxscore = scores[0];
    for (int i = 1; i<=4; i++){
        if (scores[i]>maxscore){
            maxscore =  scores[i];
        }
    }
}