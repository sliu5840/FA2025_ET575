/*
Procedure: Create a C++ program that:

Step 1) Has a string variable with an initial value of “Welcome to ” and another string with initial value “New York City”
Step 2) Has a string variable that will collect a name from computer keyboard.
Step 3) has a string variable that will concatenate the variables from step1 and step 2 using the + operator. The concatenated string should have the following order:
        Welcome to New York City _____
Step 4) prompts the concatenated string from Step 3
Step 5) uses string method to find the length of string variable from step 3. Store the return value in an integer variable
Step 6) uses string method to find word “ma” in the string variable from step 3. Store the result index in an integer variable.
Step 7) uses the string variable from step 3 and replace the word “ma” with the character  "%---%". Hint: use the index found in step 6
Step 8) prompts result from step 4, 5, 6, and 7, you must use \t to align the result, as:


------------------------------ RESULT ACTIVITY 1 ---------------------------
concatenated message:     _____   
Message length:              _____                           
Index of character 'ma':     _____  
Replace 'ma' with %---%:     _____ 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"------------------------------ RESULT ACTIVITY 1 ----------------------------"<<endl;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    string v1 = "Welcome to ";
    string v2 = "New York City, ";
    cout<< v1 + v2 + name << "!"<<endl;
    string line = (v1 + v2 + name + "!");

    int len1 = (v1 + v2 + name + "!").length();
    cout<<"Message length is "<<len1<<endl;
    cout<<""<<endl;

    int ind1 = (v1 + v2 + name + "!").find("ma");
    cout<<"Index of character is "<< ind1<<endl;
    cout<<""<<endl;

    if (ind1 == 1){
        line.replace(ind1, 2, "%---%");
        cout<<"Replace 'ma' with %---% is "<< line <<endl;
    }
    else{
        cout<<"Could not find 'ma', therefore cannot replace."<<endl;
    }
    cout<<""<<endl;
/*
Procedure: Create a C++  program that:

Step 1) sets variable pi as a constant with initial value of 3.14159
Step 2) Asks the user to enter a radius and a height from the keyboard. Store the values as float variable.
Step 3) Checks if the radius is greater than the height. Store the result in a bool variable
Step 4) Checks if the radius is equal to the height. Store the result in a bool variable
Step 5) Triple the height and increase the radius by 5 using assignment operators.
Step 6) uses logical and comparison operators to check if the radius is not equal to the height and greater than the height. Store the result in a bool variable.
Step 7) uses the radius and height from step 5 to calculate the volume of the right cylinder. The formula to calculate the volume of the right cylinder is:
    Volume = PI*radius2*height
    Store the volume in a float variable.
Step 8) Prompt result from step 3, 4, 5, 6, and 7 (you must use \t to align the result). The prompt should look as:


------------------------------ RESULT ACTIVITY 2 ----------------------------

Step 3) Is the radius greater than height?  1
Step 4) Is the radius equal to height?  0
Step 5) Triple height = 25.5cm
Step 5) Increased radius by 5 = 14.8cm
Step 6) Is the radius not equal to and greater than height ? 0
Step 7) The volume of a right cylinder with radius 14.8cm and height 25.5cm is = 17547.5cm^3
*/

    cout<<"\n------------------------------ RESULT ACTIVITY 2 ----------------------------"<<endl;
    float pi = 3.14159;
    cout<<""<<endl;
    float height;
    float radius;

    cout<<"Enter the radius: "<<endl;
    cin>>radius;
    cout<<""<<endl;
    cout<<"Enter the height: "<<endl;
    cin>>height;
    cout<<""<<endl;

    cout<<"Is the radius greater than height? "<< (radius> height) <<endl;
    cout<<"Is the radius equal to height? "<< (radius == height) <<endl;
    cout<<"Triple the height is : "<< (height *=3) <<endl;
    cout<<"Increase the radius by 5 : "<< (radius +=5) <<endl;
    cout<<"Is the radius NOT greater OR equal to the height? " << (radius>height || radius==height)<<endl;

    float volume1 = pi * (radius*radius) * (height);
    cout<<"The volume of a right cylinder with a radius of "<< radius <<" cm and a height of "<< height << " is = "<< volume1<< " cm^3"<<endl;
    return 0;
    cout<<""<<endl;
}