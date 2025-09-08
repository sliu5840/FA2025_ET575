/* 
            Lab assignment 4: string methods
--------------------------------------------------------
Write a C++ program that uses string methods to manipulate a string. 
The program should create a C++ program that will:

- ask the user to type a word from the keyboard. Save message in a variable named "word".
- print the 2nd character of the word. 
- find and print the length of the word.
- replace 2 characters from the 3rd character with "-- $ --" . Print result
- remove 3 characters from the end of the message. Print result
2nd character:          ____

Message has:             ____ characters

Replace message          _______________

Remove end message       ________________
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string variable = "word";
    cout << "Please type a word: "<<endl;
    cin >>variable;

    cout << "The 2nd character is: "<<variable[1]<<endl;
    cout<<""<<endl;

    int varlength = variable.length();
    cout <<"Message has: "<<varlength<<" characters."<<endl;
    cout<<""<<endl;

    variable.replace(3, 2, "-- $ --");
    cout<<"Replace message: "<<variable<<endl;
    cout<<""<<endl;

    variable.erase(varlength+5, 3);
    cout<<"Remove end message: " <<variable <<endl;
    cout<<""<<endl;
    return 0;
}