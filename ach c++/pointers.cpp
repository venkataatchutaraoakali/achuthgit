#include<iostream>
using namespace std;

int main(){
    int a=4;
    int*ptr=&a;
    cout<<"the value of a is "<<*(ptr)<<endl;
    char *p=new char(97);
    cout<<"the value stored at p is"<<*(p)<<endl;
    int *arr=new int[2];
    *(arr+0)=10;
   *(arr+1)=20;
    *(arr+2)=30;
    arr[3]=40;
    arr[4]=40;
    arr[5]=40;
    arr[6]=40;
    arr[7]=40;
  *(arr+8) =40;

  //delete arr;
cout<<"the value of a[0] is :"<<arr[0]<<endl;
cout<<"the value of a[1] is :"<<arr[1]<<endl;
cout<<"the value of a[2] is :"<<arr[2]<<endl;
cout<<"the value of a[3] is :"<<arr[3]<<endl;
cout<<"the value of a[4] is :"<<arr[4]<<endl;
cout<<"the value of a[5] is :"<<arr[5]<<endl;
cout<<"the value of a[6] is :"<<arr[6]<<endl;
cout<<"the value of a[7] is :"<<arr[7]<<endl;
cout<<"the value of a[8] is :"<<arr[8]<<endl;
cout<<"the value of a[9] is :"<<arr[9]<<endl;
    return 0;
}