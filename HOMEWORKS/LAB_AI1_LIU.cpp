//ChatGPT generated code

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    // Prompt user to enter all required data
    cout << "Please type a country, a gender (f for female, m for male, o for others), a zip code, and a tax rate: ";
    cin >> country >> gender >> zipcode >> rate;

    // Display results with tab alignment
    cout << "\nEntered country:\t" << country << "\n"
         << "Selected gender:\t" << gender << "\n"
         << "Zip code:\t\t" << zipcode << "\n"
         << "Tax rate:\t\t" << rate << endl;

    return 0;
}

//REFLECTION

/*
        -- AI Assistant Used: ChatGPT ---
Was the code correct?
    Yes

Was it readable and properly commented?
    Yes, the code is readable, however the user input line could be more clear with how to input the information. First time I used it, 
    I mistakenely used commas which had messed up the end result output.

Were you able to explain each line of code?
    Yes
    
Did it use the same programming concepts we learned in class?
    Yes, some of the lines are the came concept just comapcted into 1 line.


        Terminal Output: (Paste the output of your program here)
"""
Please type a country, a gender (f for female, m for male, o for others), a zip code, and a tax rate: us f 11363 27.2

Entered country:        us
Selected gender:        f
Zip code:               11363
Tax rate:               27.2

"""
*/