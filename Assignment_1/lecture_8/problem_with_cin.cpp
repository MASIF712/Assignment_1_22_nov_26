#include<iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter name : ";
    // cin >> name;// it will take only first string before white space (<enter>||<tab>||<space>) only.
    // this will result to loss of out last name;
    // cout << "name : " << name;
    // So, the solution is getline
    getline(cin, name); // this will take whole string until <enter> only;
    cout << "NAME : " << name;
    return 0;
}