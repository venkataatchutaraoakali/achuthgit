#include<iostream>
using namespace std;

int main(){
     int size=40;
    char star[20];
   cout<<"enter your city:";
   cin>>star;
//    cout<<"enter your city again:"<<endl;
//    cout<<"new city again"<<star<<endl;

   cin.getline(star,size);
   cout<<star;
    return 0;
}