#include <iostream>
using namespace std;
int main()
{
    int age;
input:
    cout << "Enter Your age(1-120) :";
    cin >> age;
    if (age > 120 || age < 0)
    {
        cout << "invalid age please valid age\n";
        goto input;
    }
    else
    {
        cout << "your age is : " << age << endl;
    }
    return 0;
}