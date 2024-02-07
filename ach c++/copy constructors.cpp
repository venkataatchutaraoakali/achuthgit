#include<iostream>
using namespace std;

class number{
 int a;
 public:
 number(){
    a=0;
 }
 number(int num){ 
a=num;
 }
/*number(number &obj){ 
    cout<<"copy constructor is called:"<<endl;
a=obj.a;
 }*/
 //when a copy constructor is not found then the compiler supplies its own copy constructor. 
 void display(){
    cout<<"the value of a is "<<a<<endl;
 }
};

int main(){
    number x,y,z(814);
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();
number z2(y);
    z2.display();
    return 0;
}