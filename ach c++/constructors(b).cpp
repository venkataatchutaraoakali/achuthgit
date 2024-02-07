#include<iostream>
using namespace std;

class akali{
    int a,b;
    public:
    void printnum(){
        cout<<"sum is"<<a<<"+"<<b<<"i"<<endl;
    }
    akali(void);
};
akali::akali(void){
a=10;
        b=10;
}
class janu{
   int str1[10];
   int str[20];
    public:
    void dispaly(){
        cout<<"the father and mother of janvika is"<<str[20]<<"+"<<str1[10];
    }
    janu(void);

};
janu::janu(){
str[20]=12;
str1[10]=10;
}
int main(){
    akali a;
    a.printnum();
    janu b;
    b.dispaly();
    return 0;
}