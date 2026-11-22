// 2 9-lecture implementing the menu with if/else if
#include <iostream>
using namespace std;
int main()
{

    int chose = 3;
    if (chose == 1)
    {
        cout << "1. Add a customer to the list.";
    }
    else if (chose == 2)
    {
        cout << "2. Remove a customer from the list.";
    }
    else if (chose == 3)
    {
        cout << "3. Change a customer in the list.";
    }
    else if (chose == 4)
    {
        cout << "4. Print the list.";
    }
    else if (chose == 5)
    {
        cout << "5. Quit the program.";
    }
    /**
     * Streaming Subscription Plans
     * 1. Basic Plan with ads - HD on 1 device
     * 2. Standard Plan - HD on 2 devices
     * 3. Premium Plan - 4K on 4 devices
     * 4. Exit without subscribing
     * Enter your choice:
     */
    int choice = 3;
    const int BASIC_CHOICE = 1, STANDARD_CHOICE = 2, PREMIUM_CHOICE = 3, QUIT_CHOICE = 4;
    if (choice == BASIC_CHOICE)
    {
        // Calculate and display basic plan charges
    }
    else if (choice == STANDARD_CHOICE)
    {
        // Calculate and display standard plan charges
    }
    else if (choice == PREMIUM_CHOICE)
    {
        // Calculate and display premium plan charges
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Thanks for considering our streaming service!\n";
    }
    else
    {
    }
    cout << "Please enter a valid choice (1-4).\n";

    return 0;
}