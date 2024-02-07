#include<iostream>
using namespace std;
class x{
int a,b;
public:
x(int p,int q){
a=p;
b=q;
}
~x()
{
    cout<<"destructor is called";
}

void print(void ){
    cout<<"teh value of a is "<<a<<endl;
     cout<<"teh value of b is "<<b<<endl;
  
}
};
class y:public x{
    int g,h;
    public:
    y(int i,int j):g(i),h(k){
    }
    
};
int main(){
y t(5,6);
t.print();
  
   x ab(4,5);
   ab.print();
    return 0;
}