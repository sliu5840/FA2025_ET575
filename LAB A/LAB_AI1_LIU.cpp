//ChatGPT generated code

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;

    // Input from the user
    std::cout << "Enter the first number (a): ";
    std::cin >> a;
    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    // Arithmetic Operations
    std::cout << "\nArithmetic Operations:\n";
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;

    if (b != 0) {
        std::cout << "a / b = " << a / b << std::endl;
        std::cout << "a % b = " << a % b << std::endl;
    } else {
        std::cout << "a / b = Undefined (division by zero)" << std::endl;
        std::cout << "a % b = Undefined (modulus by zero)" << std::endl;
    }

    // Assignment Operations
    a += 10;
    b -= 5;

    std::cout << "\nAfter assignment operations:\n";
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Boolean (Logical) Operations
    std::cout << "\nBoolean Operations:\n";
    std::cout << "Is a greater than b? " << (a > b ? "true" : "false") << std::endl;
    std::cout << "Is a equal to b? " << (a == b ? "true" : "false") << std::endl;
    std::cout << "Is a not equal to b? " << (a != b ? "true" : "false") << std::endl;
    std::cout << "Are both a and b positive? " << ((a > 0 && b > 0) ? "true" : "false") << std::endl;
    std::cout << "Is either a or b negative? " << ((a < 0 || b < 0) ? "true" : "false") << std::endl;
    std::cout << "Is a not greater than b? " << (!(a > b) ? "true" : "false") << std::endl;

    return 0;
}

//REFLECTION

/*
        -- AI Assistant Used: ChatGPT ---
Was the code correct?
    Yes

Was it readable and properly commented?
    Yes, the code is readable.

Were you able to explain each line of code?
    No because we have not learned about if else statements and other concepts yet.
    
Did it use the same programming concepts we learned in class?
    Yes, some of the lines are the same conceptt.


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