#include <iostream>
using namespace std;
int main()
{
    double average = 94;
    const int HIGH_SCORE = 88;
    if (average > HIGH_SCORE)
    { // if we forgot the brace then only one statement is depend on the condion.
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    }
    int number = 7,num2=0,num1=5,quotient=0;
    if (number % 2 == 0)
        cout << number << " is even.\n";
    else
        cout << number << " is odd.\n";
    if (num2 == 0)
    {
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again...\n";
    }
    else
    {
        quotient = num1 / num2;
        cout << "The quotient is " << quotient;
    }

    return 0;
}