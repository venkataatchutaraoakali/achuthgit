#include<iostream>
#include<fstream>
using namespace std;

int main(){
ostream outf("readingandwritingthesamefile.cpp");
cout<<"enter the item name";
char namr[30];
cin>>name;
cout<<"enter the item cost";
int cost;
cin>>cost;
outf<<cost<<endl;
outf.close();
ifstream inf("readingandwritingthesamefile.cpp");
inf>>name;
inf>>cost;
cout<<"item name"<<name;
cout<<"cost"<<cost;
inf.close();
return 0;
}