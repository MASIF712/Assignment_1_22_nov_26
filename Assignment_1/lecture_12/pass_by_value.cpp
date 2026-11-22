#include<iostream>
using namespace std;
void changeme(int n);
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    changeme(n);
    cout << "Now, back to Main function N = " << n << endl;

    return 0;
}
void changeme(int n)
{
    n += 13;
    cout << "change me funciton Now, value of  N = " << n << endl;
}