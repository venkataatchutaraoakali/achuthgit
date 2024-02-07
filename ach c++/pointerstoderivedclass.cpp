#include<iostream>
using namespace std;
 class x{

public:
int x;
void display(){
    cout<<"the value at base class is"<<x<<endl;
}
 };
 class y:public x{
public:
int y;
void display(){
    cout<<"the value at base class is"<<x<<endl;
        cout<<"the value at base class is"<<y<<endl;
}
 };
int main(){
    x a;
    x *ptr;
    ptr=&a;
ptr->x=34;
ptr->display();
y t;
y *s;
s=&t;
s->y=300;
s->display();
    return 0;
}