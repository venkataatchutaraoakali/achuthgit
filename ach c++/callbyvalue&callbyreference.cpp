#include<iostream>
using namespace std;

/*int main(){
    int a=4,b=5;
    int temp=a;
    a=b;
   b=temp;
    cout<<"the value of a is"<<a<<endl;
cout<<"the value of bis"<<b<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;

//call by reference
void swappointer(int* a,int* b){
    int temp=*a;
    *a=*b;
*b=temp;
}

int main(){
    int x=4,y=5;
  swappointer(&x,&y);
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    return 0;
}