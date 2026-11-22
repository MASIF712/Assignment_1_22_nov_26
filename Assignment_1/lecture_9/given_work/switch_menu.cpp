#include <iostream>
using namespace std;
int main()
{
    int choice;
    double sum, sub;
    cout << "   Menu\n"
         << "1. Add numbers\n"
         << "2. Subtract numbers\n"
         << "3. Quit\n"
         << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        // code to add
        int n1, n2;
        cout << "Enter first number : ";
        cin >> n1;
        cout << "Enter second number : ";
        cin >> n2;
        sum = n1 + n2;
        cout << "SUM : " << sum << endl;
        break;
    case 2:
        // code to subtract
        int n_1, n_2;
        cout << "Enter first number : ";
        cin >> n_1;
        cout << "Enter second number : ";
        cin >> n_2;
        sub = n_1 - n_2;
        cout << "SUBTRACT : " << sub << endl;
        break;
    case 3:
        cout << "Goodbye!\n";
        break;
    default:
        cout << "Invalid!\n";
    }
    return 0;
}