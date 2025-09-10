#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\n\n------ EXERCISE ------"<<endl;
    //DECLARE VARIABLES

    string country;
    cout <<"\nEnter a country: "<<endl;
    cin >> country;

    char gender;
    cout <<"\nEnter a gender (M/F): "<<endl;
    cin >> gender;

    int zipcode;
    cout <<"\nEnter a zipcode: "<<endl;
    cin >> zipcode;

    float rate;
    cout <<"\nEnter the tax rate: "<<endl;
    cin>> rate;

    cout <<"\n\nEntered country is "<<country<<endl;
    cout <<"--------\nEntered gender is "<<gender<<endl;
    cout <<"--------\nEntered zipcode is "<<zipcode<<endl;
    cout <<"--------\nEntered tax rate is "<<rate<<endl;

    cout <<""<< endl;
    return 0;
}