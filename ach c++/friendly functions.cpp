#include <iostream>
using namespace std;
class complex;
class calc
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomp(complex, complex);
    int sumcomp(complex, complex);
};
class complex
{
    int a, b;
    friend int calc::sumrealcomp(complex, complex);
    friend int calc::sumcomp(complex, complex);

public:
    void setnumb(int a1, int a2)
    {
        a = a1;
        b = a2;
    }

    void printnumb()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
    int sumrealcomp(complex, complex);
};
int sumcomp(complex, complex);

int calc ::sumrealcomp(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calc ::sumcomp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumb(1, 5);
    o2.setnumb(4, 5);
    calc ach;
    int lohi = ach.sumrealcomp(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << lohi << endl;
    calc sour;
    
    return 0;
}