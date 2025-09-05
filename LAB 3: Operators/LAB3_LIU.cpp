#include <iostream>
using namespace std;

int main()
{
    cout<< "Plese enter an integer for variable A: ";
    int A = 0;
    cin >> A;
    cout<< "Plese enter an integer for variable B: ";
    int B = 0;
    cin >> B;
    cout<< "A = " << A << endl;
    cout<< "B = " << B << endl;
    cout<< ""<<endl;

    cout<< "Arithmetic Operations: "<<endl;
    cout<< "A + B = " << A + B << endl;
    cout<< "A - B = " << A - B << endl;
    cout<< "A * B = " << A * B <<endl;
    cout<< "A * B = " << A * B <<endl;
    cout<< "A / B = " << A / B <<endl;
    cout<< "A % B = " << A % B <<endl;
    cout<< ""<<endl;

    cout<< "After assignment operations: "<<endl;
    A +=10;
    B -=5;
    cout<< "A = " << A << endl;
    cout<< "B = " << B << endl;
    cout<< ""<<endl;

    cout<< "Boolean Operations: "<<endl;
    bool greater1 = (A > B);
    bool isEqual = (A == B);
    bool isntEqual = (A != B);
    bool postivies = (A >= 0 && B >= 0);
    bool negatives = (A <= 0 || B <= 0);
    bool greater2 = (B > A);

    cout<< "Is A greater than B? "<< greater1 <<endl;
    cout<< "Is A equal to B? "<< isEqual <<endl;
    cout<< "Is A not equal to B? "<< isntEqual <<endl;
    cout<< "Are BOTH A and B both positive numbers? "<< postivies <<endl;
    cout<< "Is either A or B a negative number? "<< negatives <<endl;
    cout<< "Is A not greater than B? "<< greater2 <<endl;

    cout<< ""<<endl;
    return 0;
}