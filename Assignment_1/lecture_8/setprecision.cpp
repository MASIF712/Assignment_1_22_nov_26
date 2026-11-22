#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double quotient = 4.91877;
    cout << quotient<<endl;                    // 4.91877 (six digits default)
    cout << setprecision(5) << quotient<<endl; // 4.9188 (5 digits)
    cout << setprecision(4) << quotient<<endl; // 4.919 (4 digits)
    cout << setprecision(3) << quotient<<endl; // 4.92 (3 digits)
    cout << setprecision(2) << quotient<<endl; // 4.9 (2 digits)
    cout << setprecision(1) << quotient<<endl; // 5 (1) digit
    cout << setprecision(0) << quotient<<endl; // 5 (1) digit
    return 0;
}