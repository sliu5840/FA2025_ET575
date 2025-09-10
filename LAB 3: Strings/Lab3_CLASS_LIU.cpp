/* 

SUSAN LIU
LAB3: String and String Methods
Sept 8th, 2025

*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout <<"--------Example 1: String Indexing--------"<<endl;
    string first_name = "Soup";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The first character = "<<first_name.at(0)<<endl;
    cout <<""<< endl;
    
    cout <<"--------Example 2: String Length--------"<<endl;
    int characterlength = first_name.length();
    cout<<"The length of the first name is "<<characterlength<<endl;
    cout<<"There is "<<characterlength<<" characters in "<<first_name<<endl;
    cout <<""<< endl;

    cout <<"--------Example 3: String Concatenation--------"<<endl;
    string last_name = "Noodle";
    string username = "SN00py";
    cout<<"concatenated name = "<<first_name + last_name + username <<endl;
    cout <<""<< endl;

    cout<<"--------Example 4: Subtracting Characters In A String--------"<<endl;
    string msg = "Today is a beautiful day";
    // extract 5 characters from the 3rd character; when choosing (index number, number of characters to extract)
    string substr_char = msg.substr(2, 5);
    cout<<"Extracted characters = " << substr_char<<endl;
    cout <<""<< endl;

    cout<<"--------Example 5: Inserting Characters Into A String--------"<<endl;
    //insert the word "maybe"
    //direct method
    msg.insert(5, ", maybe,");
    cout<< "After the insert method = " <<msg <<endl;
    cout <<""<< endl;

    cout<<"--------Example 6: Inserting Characters To The End of A String--------"<<endl;
    msg.append("-- brought to you by Soup Spoons");
    cout<<"After the append method = " <<msg <<endl;
    cout <<""<< endl;

    cout<<"--------Example 7: Replacing Characters In A String--------"<<endl;
    msg.replace(19, 9, "bad");
    cout<<"After the replace method = " <<msg <<endl;
    cout <<""<< endl;

    cout<<"--------Example 8: Erasing Characters In A String--------"<<endl;
    // erase the word today
    msg.erase(0, 7);
    cout<<"After the erase method = "<<msg <<endl;
    cout<<""<<endl;

    cout<<"--------Example 9: Finding Characters In A String--------"<<endl;
    //find method returns the index number of the first found, but if character not found, value will return as -1
    //find the word "Soup"
    int index_soup = msg.find("Soup");
    cout<<"The index of Soup = "<< index_soup <<endl;
    cout<<""<<endl;
    
    cout<<""<<endl;
    return 0;
}