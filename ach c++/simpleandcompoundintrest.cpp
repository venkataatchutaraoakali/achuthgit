#include <iostream>
using namespace std;

int main()
{
    float p, t, r;
    cout << "enter the pricipal value:";
    cin >> p;
    cout << "enter the time value:";
    cin >> t;
    cout << "enter the rate value:";
    cin >> r;
    float i = (p * t * r) / 100;
    cout << "the simple interest for given principal" << p << "time" << t << "and rate of " << r << "is" << i;
    return 0;
}