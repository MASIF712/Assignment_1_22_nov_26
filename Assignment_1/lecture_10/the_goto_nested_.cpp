#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i << "," << j << endl;
            if (i == 2 && j == 2)
            {
                goto exit_loop;
            }
        }
    }
    exit_loop:
        cout << "Exit both loop."<<endl;
        return 0;
}