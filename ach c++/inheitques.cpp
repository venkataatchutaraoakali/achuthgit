#include<iostream>
using namespace std;
class x{
    public:
    void four(){
        cout<<"it has foru";
    }
};
class y{
    public:
    void four(){
        cout<<"it has five";
    }
};
class z:public x,public y
{
    public:
    void fun()
    {
        x::four();
    }
};


int main(){
    z w;
    w.fun();
    return 0;
}