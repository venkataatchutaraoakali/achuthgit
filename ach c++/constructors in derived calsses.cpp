#include<iostream>
using namespace std;
class alpha{
int x;
public:
alpha(int t){
    x=t;
    cout<<"x is initalized"<<endl;
}
void show_x(void){
    cout<<"x="<<x<<endl;
}
};
class beta{
    int y;
    public:
    beta(int p){
        y=p;
          cout<<"y is initalized"<<endl;
    }
void show_y(void){
    cout<<"y="<<y<<endl;
}
};
class gama:public beta,public alpha{
    int z,g;
    public:
    gama(int d,int f,int j,int k):beta(f),alpha(k)
    {
        z=d;
        g=k;
         cout<<"z is initalized"<<endl;
    }
    void show_z(void){
    cout<<"z="<<z<<endl;
     cout<<"g="<<g<<endl;
}

};
int main(){
    gama q(1,2,3,4);
    q.show_x();
    q.show_y();
    q.show_z();
    return 0;
}