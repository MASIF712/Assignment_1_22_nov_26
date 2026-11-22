#include<iostream>
using namespace std;
int main()
{
    //approach 1
    char character;
    cout << "Enter character 1 : ";
    cin >> character;
    cout << "Character : " << character<<endl;
    //approach 2
    cout << "Enter character 2  : ";
    cin.ignore();//ZAYA KAR NAY K LIYA STREAM KO
    cin.get(character); // our<enter> get by this get so not wait for next character enter;!
    // so we need to clear out stream so we can use only get or cin.ignore();
    cout << "Character : " << character<<endl;

    //Different way to cin.get
    char c1, c3, c2;
    cout << "c1 : ";
    cin.get();// zaya ki hay <ENTER> KO
    c1 = cin.get();
    cin.get();// zaya ki hay ENTER KO
    cout << "c2 : ";
    cin.get(c2);
    cout << "C1 : " << c1 << endl;
    cout << "C2 : " << c2 << endl;
    char charkhan;
    cout << "char khan : ";
    cin >> charkhan;
    cout << "CHAR KHAN EQUAL TO  : " << charkhan << endl;
    // shifting form cin to get caues that problem of enter get by get()
    //however form get to cin no issue at all
    return 0;
}