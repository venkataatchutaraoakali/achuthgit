#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"akali"<<endl;
    int a[]={1,3,4,5,6};
    cout<<"usind while loop"<<endl;
    while (i<=4)
    {
        /* code */
        cout<<"the values that are stored are "<<a[i]<<endl;
    }
   cout<<"usind for loop"<<endl;
    for( int i=0;i<=4;i++){
        cout<<"the values that are stored are "<<a[i]<<endl;
    }

    return 0;
}