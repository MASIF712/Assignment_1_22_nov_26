// WARNING: This program will likely CRASH!
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 3;
    int values[SIZE]; // 3 elements only
    int count;
    cout << "Storing 5 numbers in " << " 3 - element array !\n ";
                // ERROR: loop goes from 0 to 4!
                for (count = 0; count < 5; count++)
                    values[count] = 100;
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}






























// #include <iostream>
// using namespace std;
// int main()
// {
//     const int NUM_EMPLOYEES = 6;
//     int hours[NUM_EMPLOYEES];
//     int count; // count variable
//     // Input hours with a loop
//     for (count = 0; count < NUM_EMPLOYEES; count++)
//     {
//         cout << "Enter hours for employee " << (count + 1) << " : ";
//         cin >> hours[count];
//     }
//     // Display with a loop
//     cout << "Hours entered: ";
//     for (count = 0; count < NUM_EMPLOYEES; count++)
//         cout << " " << hours[count];
//     return 0;
// }
