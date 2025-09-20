/* 
LAB 7: BRANCHING MECHANISM USING SWITCH-CASE STATEMENTS
SUSAN LIU
SEPTEMBER 20TH, 2025
*/
#include <iostream>
#include <string>
using namespace std;


int main(){
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
    
    cout<<"--------------------LAB 7 EXERCISE--------------------"<<endl;
    cout<<""<<endl;

    double num1, num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;  
    cout<<"Enter the second number: "<<endl;
    cin>>num2;  
    char ans;
    cout<<"\nPlease select an operation by using one of the following characters: "<<endl;
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"%, for the modulus, remainder of division"<<endl;
    cout<<"q to quite the program"<<endl;
    cout<<""<<endl;
    cin>>ans;

    switch (ans)
    {
    case '+':{
        double sum = num1 + num2;
        cout<<"\nResult: "<<num1<<" + "<<num2<<" = "<<sum <<endl;
        break;
    }

    case '-':{
        double diff = num1 - num2;
        cout<<"\nResult: "<<num1<<" - "<<num2<<" = "<<diff<<endl;
        break;
    }

    case '*':{
        double prod = num1*num2;
        cout<<"\nResult: "<<num1<< " * "<<num2<<" = "<<prod<<endl;
        break;
    }

    case '/':{
        if (num2 != 0){
            double quot = 3.141592653;
            quot = num1 / num2;
            cout<<"\nResult: "<<num1<<" / "<<num2<<" = "<<quot<<endl;
        }
        else{
            cout<<"\nResult: UNDEFINED! It cannot be divided by 0!"<<endl;
        }
        break;
    }

    case '%':{
        if (num2 != 0){
            float f = num1;
            int i = f;

            float ff = num2;
            int ii = num2;

            int remains = i % ii;
            cout<<"\nResult: "<<num1<<" % "<<num2<<" = "<<remains<<endl;
        }
        else{
            cout<<"\nResult: UNDEFINED! It cannot be divided by 0!"<<endl;
        }
        break;
        }

    case 'q': case 'Q':
        cout<<"\n\nProgram is now shutting down...: .. :.. . : . ."<<endl;
        break;

    default:
        cout<<"\n\nERROR! ERROR! INPUT IS INVALID!!!!\t\t\t\t\t\tERROR! ERROR! INPUT IS INVALID!!!!\t\t\tERROR! ERROR! INPUT IS INVALID!!!!\t\t\tERROR! ERROR! INPUT IS INVALID!!!!\t\t\tERROR! ERROR! INPUT IS INVALID!!!!\t\t\tERROR! ERROR! INPUT IS INVALID!!!!\t\t\tERROR! ERROR! INPUT IS INVALID!!!!"<<endl;
        break;
    }
    cout<<""<<endl;
    cout<<""<<endl;
    return 0;
}