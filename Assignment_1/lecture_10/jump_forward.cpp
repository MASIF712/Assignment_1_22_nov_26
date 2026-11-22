#include <iostream>
using namespace std;
int main()
{
    double balance, price = 1500;
    cout << "Enter balance : ";
    cin >> balance;
    if (price > balance)
    {
        goto error;
    }
    cout << "purchase sucessful";
    return 0;

error:
    cout << "Error Insufficient balance";
    return 0;
}