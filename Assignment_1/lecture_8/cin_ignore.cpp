#include<iostream>
using namespace std;
int main()
{
    char cha1, char2;
    cout << "Enter char 1 : ";
    cin >> cha1;
    cout << "Enter char 2 : ";
    cin.ignore(10,'\n');// ignore up to 10 element
    cin.get(char2);
    cout << "\nchar 1 : " << cha1 << endl;
    cout << "char 2 : " << char2 << endl;
    return 0;
}