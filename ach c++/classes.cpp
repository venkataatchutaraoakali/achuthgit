#include<iostream>
using namespace std;
class employee
{
     private:
     int a,b,c;
   public:
   int d,e;
   void setdata(int a1,int b1,int c1);
   void getdata(){
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
     cout<<"the value of c is"<<c<<endl;
      cout<<"the value of d is"<<d<<endl;
       cout<<"the value of e is"<<e<<endl;
   }
}; 
class lohi
{
    private: 
    int q,w,r;
    public:
    int z,x,c ;
    int setdata(int q1,int w1,int r1);
void getdata(){
    cout<<"the value of q is"<<q<<endl;
    cout<<"the value of w is"<<w<<endl;
     cout<<"the value of r is"<<r<<endl;
      cout<<"the value of is"<<z<<endl;
       cout<<"the value of e is"<<r<<endl;
}
};
 int lohi::setdata(int q1,int w1,int r1){
    q=q1;
    w=w1;
    r=r1;
}
void employee:: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee achu;
    achu.e=2102;
    achu.d=814;
    achu.setdata(2,1,3);
    achu.getdata();
    lohi dev;
   dev.z=3;
dev.x=2;
dev.c=1;
dev.setdata(8,6,0);
dev.getdata();
    return 0;

}
