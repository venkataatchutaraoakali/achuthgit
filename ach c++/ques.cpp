#include<iostream>
using namespace std;
class x{
int a;
int b;
public:
void add(int x,int y){
    a=x;
    b=y;
    int c=x+y;
    cout<<c<<endl;
}

};
class y:public x{
    public:
void multi(int x,int y){
  double   z=x-y;
cout<<z<<endl;
}
};
/// @brief 
/// @return 
int main(){
   x t;
   t.add(2102,814);
y r;
    r.multi(23,12);
return 0;
}