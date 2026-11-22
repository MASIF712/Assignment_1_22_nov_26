#include <iostream>
using namespace std;
int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    int count; // count variable
    // Input hours with a loop
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter hours for employee  " << (count + 1) << " : ";
        cin >> hours[count];
    }
    // Display with a loop
    cout << "Hours entered: ";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    return 0;
}