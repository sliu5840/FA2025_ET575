/*
SUSAN LIUI
SEPTEMBER 15TH, 2025
LAB 6:
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"-------Example 1: nested conditional statement-------"<<endl;
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
    //compare if num2 is > than num1 and num3
    else if (num2>num1 && num2>num3){
        cout<<"Num2 is the largest integer"<<endl;
    }
    //compare if num3 is > than num2 and num1
    else if (num3>num2 && num3>num1){
        cout<<"Num3 is the largest integer"<<endl;
    }
    else{
        cout<<"The integers are all equal"<<endl;
    }
    

    //check but with condensing!!!!

    //compare if num1 is > than num2 and num3, then order them
    if (num1>num2 && num1>num3){
        if (num2>num3)
        cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
        cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    //compare if num2 is > than num1 and num3, then order them
    else if (num2>num1 && num2>num3){
        if (num1>num3)
        cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
        cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    //compare if num3 is > than num2 and num1, then order them
    else if (num3>num1 && num3>num2){
        if (num1>num2)
        cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;       
    }
        else{
        cout<<"The integers are all equal"<<endl;
    }
    cout<<""<<endl;


    cout<<"\n-------Example 3: Switch Statements-------"<<endl;
    //select day off using switch case statement
    int dayoff;
    cout<<"select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>dayoff;
    cout<<""<<endl;

    switch (dayoff)
    {
    case 1:
        cout<<"Your day off is Monday"<<endl;
        break;
    case 2:
        cout<<"Your day off is Tuesday"<<endl;
        break;
    case 3:
        cout<<"Your day off is Wednesday"<<endl;
        break;
    case 4:
        cout<<"Your day off is Thursday"<<endl;
        break;
    case 5:
        cout<<"Your day off is Friday"<<endl;
        break;
    default:
        cout<<"Unable to read the day off"<<endl;
        break;
    }
    cout<<""<<endl;

    cout<<"\n-------Example 4: Switch to select a gender-------"<<endl;
    char gender = ' ';
    cout<<"select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for female"<<endl;
    cout<<"o or O for other"<<endl;
    cin>>gender;
    cout<<""<<endl;

    switch (gender)
    {
    case 'm': case 'M':
        cout<<"You are male"<<endl;
        break;
    case 'f': case 'F':
        cout<<"You are female"<<endl;
        break;
    case 'o': case 'O':
        cout<<"You have selected 'other' for your gender"<<endl;
        break;
    default:
        cout<<"Your Gender if undefined"<<endl;
        break;
    }
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    
    
    cout<<"------------LAB 6 AFTER CLASS HW ASSIGNMENT EXERCISE 1:------------"<<endl;
    int amt;
    cout<<"Please enter the amount of money in your savings: "<<endl;
    cin>>amt;
    cout<<""<<endl;
    
    if (amt<=199999 && amt > 0){
        cout<<"Keep Saving!"<<endl;
    }
    else if (amt>= 200000 && amt<=500000){
        if (amt >= 200000 && amt <= 300000)
        cout<<"You can get a studio."<<endl;
        else if (amt >= 300001 &&  amt <= 400000)
        cout<<"You can get an apartment or condo with 1br and 1 bath"<<endl;
        else if (amt >= 400001 &&  amt <= 500000)
        cout<<"You can get an apartment or condo with 2br and 2 bath"<<endl;
    }
    else if (amt>= 500001 && amt<=1000000){
        if (amt >= 500001 && amt <= 700000)
        cout<<"You can get a house with 2br and 2 bath"<<endl;
        else if (amt >= 700001 && amt <= 1000000)
        cout<<"You can get a house with 3br and 3 bath"<<endl;
    }
    else if (amt>= 1000001){
        cout<<"Mansion!!"<<endl;
    }
    else if (amt<=0){
        cout<<"Have some savings!"<<endl;
    }
    cout<<""<<endl;
    cout<<""<<endl;

    cout<<"------------LAB 6 AFTER CLASS HW ASSIGNMENT EXERCISE 2:------------"<<endl;
    float nums = 0;
    cout<<"Please enter a number: "<<endl;
    cin >> nums;
    cout<<""<<endl;

    char ans;
    cout<<"Would you like to double the number? Y or N: ";
    cin>>ans;
    cout<<""<<endl;

    switch (ans)
    {
    case 'y' : case 'Y':
        nums = nums *=2;
        cout <<"The number is now set to "<< nums <<endl;
        break;
    case 'n': case 'N':
        cout <<"The number is still set to "<< nums <<endl;
        break;
    default:
        nums = 0;
        cout <<"The number is now set to "<< nums <<endl;
    }
    cout<<""<<endl;
    return 0;

}