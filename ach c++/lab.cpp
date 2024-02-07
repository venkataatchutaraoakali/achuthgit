#include<iostream>
using namespace std;
class car {
  public:
  string brand;
  string model;
  int year;
  
  car(string x,string y,int  z);
};
  car::  car (string x,string y,int z);
x=brand;
model=y;
year=2003;
int main(){
Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

 
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}