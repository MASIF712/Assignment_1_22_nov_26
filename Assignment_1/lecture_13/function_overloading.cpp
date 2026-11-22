#include <iostream>
using namespace std;
double sum(int a, int b);
double sum(double a, double b);
int main()
{
    int a = 5, b = 2.5;
    // cout << "Enter first integer numbner : ";
    // cin >> a;
    // cout << "Enter second integer number : ";
    // cin >> b;
    int intsum = sum(a, b);
    cout << "Int sum =" << intsum << endl;
    double i = 5, j = 2.5;
    // cout << "Enter first double numbner : ";
    // cin >> i;
    // cout << "Enter second double number : ";
    // cin >> j;
    double double_sum = sum(i, j);

    cout << "Double sum =" << double_sum << endl;
    return 0;
}
double sum(int a, int b)
{
    double sum = a + b;
    return sum;
}
double sum(double a, double b)
{
    double sum = a + b;
    return sum;
}