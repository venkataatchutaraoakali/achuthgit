#include<iostream>
using namespace std;

int main(){

    int count=0;
    char c;
    cout<<"input text"<<endl;
    cin.get(c);
    while(c!='\n'){
    cout<<c;
        count++;
        cin.get(c);
    }
    cout<<"number of characters="<<count<<endl;
    char name[20];
cin.getline(name,20);

    return 0;
}