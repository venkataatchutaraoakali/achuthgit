#include<iostream>
using namespace std;
class num{
int count=0;
public:
num(){
    count++;
    cout<<"this is the time when constructor called"<<count<<endl;

}
~num(){
cout<<"this is the time when my destructor called for  object number"<<count<<endl;
count--;

}

};
int main(){
    cout<<"we are at main functuon"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two morw obj:"<<endl;
        num n2,n3;
cout<<"exiting the block"<<endl;
    }
    cout <<"back to main"<<endl;
    return 0;
}