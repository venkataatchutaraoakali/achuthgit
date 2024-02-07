#include<iostream>
using namespace std;

int sum(int a,int b);
//{123

   // int c=a+b;
   // return c;
//}
void  a(void);
int main(){
    int num1,num2; 
    cout<<"enter the value of num1:"<<endl;
    cin>>num1;
    cout<<"enter the value of num2:"<<endl;
     cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    a();
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
void a(){
    cout<<"\nhello";
}