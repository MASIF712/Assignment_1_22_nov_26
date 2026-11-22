#include <iostream>
using namespace std;
int main()
{
    int score1, score2, score3;
    double average;
    char again;
    do
    {
        cout << "Enter 3 scores: ";
        cin >> score1 >> score2 >> score3;
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << ".\n";
        cout << "Average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');

    return 0;
}