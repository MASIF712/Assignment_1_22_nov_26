#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double day1, day2, day3, total;
    cout << "Enter day1 : ";
    cin >> day1;
    cout << "Enter day2 : ";
    cin >> day2;
    cout << "Enter day3 : ";
    cin >> day3;
    total = day1 + day2 + day3;
    cout << "SALES OF COMPANY" << endl;
    cout << "----------------" <<setprecision(2)<<fixed<< endl;
    //here fixed work for after decimal point only two presesion will set.
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total : " << setw(8) << total << endl;
    return 0;
}