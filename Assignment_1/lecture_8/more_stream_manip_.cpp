#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float number = 235;
    cout << "Number : " << number << endl;
    cout << showpoint << "Number : " << number << endl;//SHOW EXPLIXIT ZEROS
    cout << left << "Number : " << setw(10) << number << endl;
    cout << right << "Number : " << setw(10) << number << endl;
    // NOTE! : setw k ilawa baqi sub presist hotay hain means (use one time work all time)
    return 0;
}