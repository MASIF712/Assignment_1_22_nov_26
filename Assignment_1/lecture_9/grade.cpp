#include <iostream>
using namespace std;
int main()
{
    int testScore = 43;
    if (testScore >= 90)
        cout << "Your grade is A.\n";
    else
    {
        if (testScore >= 80)
            cout << "Your grade is B.\n";
        else
        {
            if (testScore >= 70)
                cout << "Your grade is C.\n";
            else
            {
                if (testScore >= 60)
                    cout << "Your grade is D.\n";
                else
                    cout << "Your grade is F.\n";
            }
        }
    }
    return 0;
}