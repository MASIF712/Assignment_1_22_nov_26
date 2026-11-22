#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi = 3.141534982023;
    cout << "Pi : " << pi<<endl;
    cout <<fixed<< "Pi : " << pi<<endl;
    cout <<setprecision(8)<< "Pi : " << pi<<endl;

    return 0;
}