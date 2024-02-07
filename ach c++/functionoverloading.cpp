#include<iostream>
using namespace std;
int sum(int x,int y){
return x+y;
}
int sum(int x,int y,int z){
    return x+y+z;
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
   cout<<"the sum of a and b is"<<sum (3, 4);
// cout<<"the sum of a and b is"<<sum (3,4,5);

    return 0;
}