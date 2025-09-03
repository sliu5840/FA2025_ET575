/*
SUSAN LIU
LAB 2: Operators
Date: September 3rd, 2025
*/
#include <iostream>
using namespace std;

int main()
{
    /*
    
    cout<< "------- Example 1: Arithmetic Operators -------" << endl;
    //set number format
    cout.setf(ios::fixed);
    cout.precision(3);
    //Calculate the heihgt of a free falling object
    //free_fall = 0.5 * g * time * time
    //declare variables; constant variable for gravity; float for time and height
    const float GRAVITY = 9.8;
    float time = 0, height = 0;
    //collect falling time
    cout << "Enter the falling time (in seconds): ";
    cin >> time;
    //calculate height for free fall object
    height = 0.5 * GRAVITY * time * time;
    //print results
    cout << "The height of the free fall object is " <<height<< " meters." << endl;
    cout<<""<< endl;
    

    cout <<"------- Example 2: Assignment Operators -------" << endl;
    int number1 = 10, number2 = 3;
    cout<< "Original number1 = " <<number1<< endl;
    number1 ++;
    cout<< "Updated number1 = " <<number1<< endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<< "Original number2 = " <<number2<< endl;
    number2 --;
    cout<< "Updated number2 = " <<number2<< endl;
    number2 +=5;
    cout<< "Updated number2 = " <<number2<< endl;
    number1*=2;
    cout<< "Updated number1 = " <<number1<< endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"The value of number1 is " <<number1<< " and the value of number2 is " <<number2<< endl; 
    number1 %= number2;
    cout<< "After %= operation, the value of number1 is " <<number1<< endl;
    cout<< "After %= operation, the value of number2 is " <<number2<< endl;
    cout<<""<< endl;
    

    cout <<"------- Example 3: Comparison Operators -------" << endl;
    cout<<"Is number 1 equal to number2? " << (number1 == number2) << endl;
    cout<<"Is number1 greater than number2? "<< (number1 > number2)<<endl;
    cout<<"Is number1 less than number2? " <<(number1 < number2)<<endl;
    cout<<"Is number1 not equal to number2? " << (number1 != number2)<< endl;
    cout <<""<< endl;
    

    cout <<"------- Example 4: Logic Operators -------" << endl;
    //AND operator
    bool check_and = (number1 != number2) && (number1 < number2) && (number1 > 5);
    // number1 != number2 --> true;;;;;; number1 < number2 --> true;;;;;;; number1 > 5 --> false
    // true && true && false --> false
    cout<<"The result of check_and is "<<check_and<< endl;
    //OR operator
    bool check_or = (number2 != 3) || (number2 > 10) || (number2 < number1);
    //number2 != 3 --> true;;;;;; number 2 > 10 --> false;;;;;; number2 < number1 --> false
    //true || false || false --> true
    cout<<"The result of check_or is "<<check_or<< endl;
    cout <<""<< endl;
    */

    cout <<"------- Example 5: Casting -------" << endl;
    int n = 5;
    float m = n/2; //implicit casting
    
    cout <<"Implicit casting = "<<n/2<< endl;
    cout <<"Implicit casting = "<<m<< endl;

    cout<<""<< endl;
    return 0;
}
