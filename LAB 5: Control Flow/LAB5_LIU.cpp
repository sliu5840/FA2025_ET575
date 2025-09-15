/* 

SUSAN LIU
LAB5: Control Flow
Sept 10th, 2025

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //EXAMPLES USING VARIABLE n
    /*
    cout<<"--------Example 1: Bool Variables--------"<<endl;
    //declare then collect; check if number is positive; 
    int n;
    cout<<"Enter an interger: ";
    cin>>n;
    cout<<""<<endl;

    //side attempt to make it print true or false
    bool checkPositive = n >0;
    if (checkPositive = 1){
        checkPositive = "true";
        cout<<"Is the number positive? "<<checkPositive<<endl;
    }
    else{
        checkPositive = false;
        cout<<"Is the number positive? "<<checkPositive<<endl;
    }
    //end of attempt

    cout<<""<<endl;

    cout<<"--------Example 2: If Statements--------"<<endl;
    //change the checking code to 999 if number is pos
    int checking_code = 112;
    if (n>0){
        checking_code = 999;
    }
    cout<<"Checking code is "<<checking_code<<endl;
    cout<<""<<endl;

    cout<<"--------Example 3: If-Else Statements--------"<<endl;
    //checking if integer is even
    if (n%2 ==0){
        cout<<n<<" is an even number."<<endl;
    }
        else{
            cout<<n<<" is an odd number."<<endl;
        }
    cout<<""<<endl;

    cout<<"--------Example 4: If-Else Statements--------"<<endl;
    //absolute value
    if (n>0){
        cout<<n<< " is positive"<<endl;
    }
    else{ 
        cout<<n<<" is negaitve"<<endl;
        n*=-1;
        cout<<"The absolute value of n is "<<n<<endl;
        cout<<""<<endl;

    }
    */

    cout<<"---------Example 5: Multiway Statements and Multi-Conditional Statements--------"<<endl;
    //select a color based on the wavelength enter by user
    int wavelength;
    cout<<"Enter a wavelength in (nm): ";
    cin>>wavelength;
    cout<<""<<endl;

    //multiconditional statements
    if (wavelength >=0 && wavelength <=379){
        cout<<"The color is Ultraviolet!"<<endl; 
    }
    else if (wavelength >=380 && wavelength <=520){
        cout<<"The color is Blue!"<<endl; 
    }
    else if (wavelength>=521 && wavelength <=590){
        cout<<"The color is Green!"<<endl; 
    }

    //regular if, else if, else 
    else if (591<=wavelength<=740){
        cout<<"The color is Red!"<<endl;

    }
    else if (591<=wavelength<=740){
        cout<<"The color is Red!"<<endl;
    }
    else if (wavelength>=741){
        cout<<"The color is Infrared!"<<endl;
    }
    else{
        cout<<"The color is undetermined!"<<endl;
    }
    cout<<""<<endl;
    
    cout<<"---------Example 7: Nested If Statements--------"<<endl;

    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"--------CONTROL FLOW: lab assignemt (AFTER CLASS) HW--------"<<endl;

    //declare variables
    float final = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    string GPA = "Z";

    //collect values
    cout<<"Enter your final exam grade (0-100): "<<endl;
    cin>>final;

    cout<<"Enter your labs grade (0-100): "<<endl;
    cin>>labs;

    cout<<"Enter your Homework grade (0-100): "<<endl;
    cin>>homework;
    cout<<""<<endl;

    //calculate grade = final_exam *0.5 + labs*0.3 + homework*0.2
    grade = final*0.5 + labs*0.3 + homework*0.2;
    cout<<"Your final numerical grade is "<<grade<<endl;
    int grade1 = int (grade); 
    cout<<""<<endl;

    //multiway statement 
    if ( 100 >= grade1 && grade1 >= 90){
        GPA = "A";
    }
    else if ( 89 >= grade1 && grade1 >= 80){
        GPA ="B";
    }
    else if ( 79 >= grade1 && grade1 >= 70){
        GPA = "C";
    }
    else if ( 69 >= grade1 && grade1>= 60){
        GPA = "D";
    }
    else if ( grade1 <= 59){
        GPA = "F";
    }
    else {
        GPA = "n/a ";
    }
    cout <<"A final grade of "<< grade<<" is equivalent to a GPA of "<< GPA <<endl;
    return 0;
    cout<<""<<endl;
    return 0;
}

