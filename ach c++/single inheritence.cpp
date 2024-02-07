#include<iostream>
using namespace std;
class base{
int data1;
public:
int data2;
void setdata();
int getdat1();
int getdat2();
};
 void base::  setdata(void)
 {
    data1=10;
    data2=30;
 }
 int base::getdat1(){
    return data1;
 }
int base::getdat2(){
    return data2;
 }
class derived:public base{
int data3;
public:
void process();
void display();
};
void derived::process(){
    data3=data2*getdat1();
}
void derived::display(){
    cout<<"the value of data1 is"<<getdat1()<<endl;
      cout<<"the value of data2 is"<<getdat2()<<endl;
        cout<<"the value of data3 is"<<data3<<endl;
}


int main(){
derived der;
der.setdata();
der.process();
der.getdat1();
der.getdat2();
der.display();
    return 0;
}