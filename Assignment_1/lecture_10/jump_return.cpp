#include<iostream>
using namespace std;
int main()
{
    double balance, price=5000;
    cout << "Enter balance : ";
    cin >> balance;
    if(balance<price)
    {
        cout << "insufficient balance";
        return 0;
    }

    balance = balance - price;
    cout << "withdrawal sucessuflly"<<endl;
    cout << "remnaning balance is : " << balance << endl;
    return 0;
}