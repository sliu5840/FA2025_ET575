//Copilot generated code
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a, b;

    // Input
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Arithmetic Operations
    cout << "\nArithmetic Operations:\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Assignment Operations
    a += 10;
    b -= 5;
    cout << "\nAfter assignment operations:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Boolean Operations
    cout << "\nBoolean Operations:\n";
    cout << "Is a greater than b? " << (a > b ? "true" : "false") << endl;
    cout << "Is a equal to b? " << (a == b ? "true" : "false") << endl;
    cout << "Is a not equal to b? " << (a != b ? "true" : "false") << endl;
    cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << endl;
    cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << endl;
    cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << endl;

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
    For the most part, yes. However, the thing I cannot explain is how to get the boolean operation to output true or false instead of 1 or 0.
    
Did it use the same programming concepts we learned in class?
    Yes

        Terminal Output: (Paste the output of your program here)
"""


Enter the first number (a): 15
Enter the second number (b): 10

Arithmetic Operations:
a + b = 25
a - b = 5
a * b = 150
a / b = 1
a % b = 5

After assignment operations:
a = 25
b = 5

Boolean Operations:
Is a greater than b? true
Is a equal to b? false
Is a not equal to b? true
Are both a and b positive? true
Is either a or b negative? false
Is a not greater than b? false

"""

*/