// 3 9-lecture switch in menu systems
#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch (choice)
    {
    case 'A':
        cout << "You entered A.\n";
        break;
    case 'B':
        cout << "You entered B.\n";
        break;
    case 'C':
        cout << "You entered C.\n";
        break;
    default:
        cout << "Invalid choice!\n";
    }
    // break work===========================
    switch (choice)
    {
    case 'a':
    case 'A':
        cout << "You selected A.\n";
        break;
    case 'b':
    case 'B':
        cout << "You selected B.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }
//==========================
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
        break;
    case 2:
        // code to subtract
        break;
    case 3:
        cout << "Goodbye!\n";
        break;
    default:
        cout << "Invalid!\n";
    }
    return 0;
}