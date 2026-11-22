#include <iostream>
using namespace std;
int main()
{
    char employed = 'Y',recentGrad='Y';
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') // Nested if
        {
            cout << "You qualify for the special "
                 << "interest rate.\n";
        }
        else // Not a recent grad
        {
            cout << "You must have graduated...\n";
        }
    }
    else // Not employed
    {
        cout << "You must be employed to qualify.\n";
    }

    return 0;
}