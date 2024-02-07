#include <iostream>
using namespace std;
class comp
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(comp o1, comp o2)
    {
        a = a = o1.a + o2.a;
        b = a = o1.b + o2.b;
    }
    void printnum()
    {
        cout << "your complex number is " << a << "+"<<b<< "i" << endl;
    }
};
int main()
{
    comp c1, c2, c3;
    c1.setdata(1, 4);
    c1.printnum();

    c2.setdata(1, 2);
    c2.printnum();

    c3.setdata(1,42);
    c3.printnum();
    return 0;
}