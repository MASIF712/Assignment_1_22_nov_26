#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 2, c = 3, d = 10, e = 7, f = 7, g = 1;
    auto x = a + b * c > d && e != f || g ? 100 : 200;
    cout << "x : " << x << endl;
    /**
     * according to given structure first b*c happen result 5+6>10 caused to result true 
     * and then that leads to true that logical && operator but 7!=7 false,
     * however other side of orr 1 is true So overall true,
     * first statement 100 is assign to x
     * x : 100
     */
    return 0;
}