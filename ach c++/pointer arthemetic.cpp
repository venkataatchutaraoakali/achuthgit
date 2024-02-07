#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int *ptr;
    ptr=&a[0];
   ptr=a;
   cout<<"vale at ptr"<<*ptr;
  --ptr;
   
    return 0;
}