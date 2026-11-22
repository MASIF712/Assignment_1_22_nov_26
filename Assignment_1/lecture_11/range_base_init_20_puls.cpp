

#include <iostream>
using namespace std;
int main()
{
    int scores[] = {85, 92, 78, 95, 88};
    for (int count = 1; double score : scores)
    {
        cout << "Score #" << count
             << ": " << score << endl;
        count++;
    }
    return 0;
}