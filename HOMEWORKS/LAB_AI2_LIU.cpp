//Copilot generated code

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;

    // Prompt user for input
    cout << "Please enter the following information:\n";
    cout << "Country: ";
    getline(cin, country); // Use getline to allow spaces in country name

    cout << "Gender (f for female, m for male, o for others): ";
    cin >> gender;

    cout << "Zip code: ";
    cin >> zipcode;

    cout << "Tax rate (e.g., 7.25): ";
    cin >> rate;

    // Display the collected information
    cout << "\nEntered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << "%" << endl;

    return 0;
}

//REFLECTION

/*
        -- AI Assistant Used: ChatGPT ---
Was the code correct?
    Yes

Was it readable and properly commented?
    Yes.

Were you able to explain each line of code?
    For the most part, yes. However, the command "getline" has not been taught yet, so i would be unable to explain that
    
Did it use the same programming concepts we learned in class?
    Yes, some of the lines are the came concept just comapcted into 1 line.


        Terminal Output: (Paste the output of your program here)
"""

Please enter the following information:
Country: us
Gender (f for female, m for male, o for others): f
Zip code: 11363
Tax rate (e.g., 7.25): 27.2

Entered country:        us
Selected gender:        f
Zip code:               11363
Tax rate:               27.2%

"""

*/