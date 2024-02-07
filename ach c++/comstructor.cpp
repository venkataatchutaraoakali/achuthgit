#include <iostream>
using namespace std;
class complex
{
    int a, b;
public:
void printnum()
{
    cout << "our  number is " << a << "+" << b << "i";
}
    complex(void);
};
complex::complex(void)
{
    a = 20;
    b = 20;
}

int main()
{
    complex c;
c.printnum();
    return 0;
}