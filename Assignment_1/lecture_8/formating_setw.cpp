#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    // setw()
    //• It only affects the very next value printed
    //• Values are right-justified by default within the field


    cout << setw(6) << 2897 << setw(6) << 5 << setw(6) << 837 << endl;
    cout << setw(6) << 34 << setw(6) << 7 << setw(6) << 1623 << endl;
    cout << setw(6) << 390 << setw(6) << 3456 << setw(6) << 12 << endl;

    return 0;
}