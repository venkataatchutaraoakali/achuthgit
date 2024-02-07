#include<iostream>
using namespace std;
class aka{
public:
int a=3;
void display{
    cout<<"the calue of a is "<<a;
}
};
class b:public a{
public:
int d;
void display(){}
}; 
int main(){
    b v;
    v.display();
    return 0;
}