#include<iostream>
using namespace std;
class y;

class x{
int  a;

public:
void setval( int a1){
   a=a1;
}
friend void add(x,y);
};

class y{
int b;
public:
void setval( int a2){
   b=a2;
}
friend void add(x,y);
};
void add(x o1,y o2){
    cout<<"the sum of a and b is:"<<o1.a+o2.b;
}
int main(){
    x p;
    p.setval(3);
    y q;
    q.setval(24);
    add(p,q);
    return 0;
}