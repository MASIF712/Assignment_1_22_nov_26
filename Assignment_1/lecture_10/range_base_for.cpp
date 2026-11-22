#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greeting{"HELLO_WORLD"};
    for (auto i : greeting)
    {
        cout << "[" << i << "]" << "";
    }
    cout << "\n";
    return 0;
}