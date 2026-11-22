// This program uses const reference parameters.
#include <iostream>
#include <string>
using namespace std;
string joinStrings(const string &first, const string &second);
int main()
{
    string firstName, lastName, fullName;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    fullName = joinStrings(firstName, lastName);
    cout << "Hello " << fullName << endl;
    return 0;
}

string joinStrings(const string &first, const string &second)
{
    return first + " " + second;
}
