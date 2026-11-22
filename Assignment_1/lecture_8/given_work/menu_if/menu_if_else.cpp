#include <iostream>
using namespace std;
int main()
{
    const int BASIC_CHOICE = 1, STANDARD_CHOICE = 2, PREMIUM_CHOICE = 3, QUIT_CHOICE = 4;
    int choice;
    double BASE_Amount = 500;
    double basic_price = BASE_Amount, standard_price = BASE_Amount, premium_price = BASE_Amount, HD_per_device = 200, ads_remove = 300, Four_K_perdevice = 800;
    cout << "  Streaming Subscription Plans  " << endl;
    cout << "--------------------------------" << endl;
    cout << ("1. Basic Plan with ads - HD on 1 device\n"
             "2. Standard Plan - HD on 2 devices\n"
             "3. Premium Plan - 4K on 4 devices\n"
             "4. Exit without subscribing\n");

    cout << "Enter your choice : ";
    cin >> choice;
    if (choice == BASIC_CHOICE)
    {
        cout << "BASIC PLAN\n";
        cout << "with Ads\n";
        cout << "HD on 1 Device\n";
        basic_price += HD_per_device;
        cout << "ONLY " << basic_price << "PKR" << endl;
        // Calculate and display basic plan charges
    }
    else if (choice == STANDARD_CHOICE)
    {
        cout << "STANDARD PLAN\n";
        cout << "with Ads\n";
        basic_price += ads_remove;
        cout << "HD on 2 Device\n";
        basic_price += HD_per_device * 2;
        cout << "ONLY " << basic_price << "PKR" << endl;
        // Calculate and display standard plan charges
    }
    else if (choice == PREMIUM_CHOICE)
    {
        cout << "PREMIUM PLAN\n";
        cout << "with Ads\n";
        basic_price += ads_remove;
        cout << "HD on 1 Device\n";
        basic_price += Four_K_perdevice * 4;
        cout << "ONLY " << basic_price << "PKR" << endl;
        // Calculate and display premium plan charges
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Thanks for considering our streaming service!\n";
    }
    else
    {
        cout << "Please enter a valid choice (1-4).\n";
    }

    return 0;
}