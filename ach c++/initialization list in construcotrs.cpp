#include<iostream>
using namespace std;
class xyz{
int a,b;
int c,d;
public:
xyz(int i,int j,int k,int l):a(i),b(3*j),c(k),d(3*l){
}

void display(){
    cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
}
};
int main(){
    xyz c(3,4,5,6);

    c.display();
    return 0;
}