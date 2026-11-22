// 1 8-lecture the fixed manipulator: work on the program in it.
#include<iostream>
#include<numbers>
using namespace std;
int main()
{
    float radius;
    std::cout << "Enter radius of circle : ";
    std::cin >> radius;
    std::cout << "The area of circle is " << std::numbers::pi* radius * radius <<"cm^2"<< endl;
    // Here we use pi from numbers namespace by using scope resolution operator ::
    // to get approximate stroed value of pi(double)=3.141592653589793
    return 0;
}
/** 
 *   OUTPUT:
 *   Enter radius of circle : 12
 *   The area of circle is 452.389cm^2
 *  */