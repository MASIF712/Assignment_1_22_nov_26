#include <iostream>
using namespace std;
int main()
{
    const int MIN_LENGTH = 8;
    string password = "12345679";
    string username = "masifkharkoolahari";
    if (int ulen = username.length(); ulen < MIN_LENGTH)
    {
        cout << "Your username is too short." << endl;
    }
    else if (int plen = password.length(); plen < MIN_LENGTH)
    {
        cout << "Your password is too short." << endl;
    }
    else
    {
        cout << "Both meet the minimum length." << endl;
    }

    return 0;
}