#include<iostream>
using namespace std;
class akali{
public:
int a;
int b;
void add(){
    cin>>a>>b;
    cout<<a+b<<endl;
}
};
int main(){
    akali achu;
    achu.add();
    return 0;
}