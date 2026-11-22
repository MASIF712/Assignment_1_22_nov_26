
#include <iostream>
using namespace std;
int main()
{
    int minNumber, maxNumber;
    cout << "Enter the starting number: ";
    cin >> minNumber;
    cout << "Enter the ending number: ";
    cin >> maxNumber;
    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}