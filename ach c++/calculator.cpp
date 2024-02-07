#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
int a,b;
public:
void get_data(){
    cout<<"the value of a is"<<endl;
    cin>>a;
    cout<<"the value of b is"<<endl;
      cin>>b;
}
void perform_operations(){
     cout<<"The sum is: "<<a+b<<endl;
    cout<<"The sum is: "<<a-b<<endl;
    cout<<"The sum is: "<<a*b<<endl;
    cout<<"The sum is: "<<a/b<<endl;
}
};
class scientific_calc{
int a,b;
public:
void get_data(){
    cout<<"the value of a is"<<endl;
    cin>>a;
    cout<<"the value of b is"<<endl;
      cin>>b;
}   
void perform_operations(){
     cout<<"The sin is: "<<sin(a)<<endl;
    cout<<"The cos is: "<<cos(b)<<endl;
    cout<<"The tan is: "<<tan(b)<<endl;
    cout<<"The exp is: "<<exp(a)<<endl;
}
};
int main(){
  simplecalculator cal;
  cal.get_data();
  cal.perform_operations();
    scientific_calc ach;
    ach.get_data();
    ach.perform_operations();
    return 0;
}