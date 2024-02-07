#include<iostream>
using namespace std;

int main(){
    int count=0;
    char c;
    cout<<"input text:"<<endl;
    cin.get(c);
    while (c!='\n'){
cout.put(c);
count++;
cin.get(c);

    }
    cout<<endl;
    cout<<"length of input is "<<count;
    return 0;
}