#include <iostream>
using namespace std;
int main()
{
    const int HIGH_SCORE = 95;
    int score1, score2, score3;
    double average;
    cout << "Enter 3 test scores: ";
    cin >> score1 >> score2 >> score3;
    average = (score1 + score2 + score3) / 3.0;
    cout << "Your average is " << average << endl;
    if (average > HIGH_SCORE)
        cout << "Congratulations! High score!\n";

    return 0;
}