// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     string st="akali";
//      string st2="achuth akali";
    
//     int a=2102;
//     ofstream out("sample.txt");//writing
//     ifstream in("sampleb.txt");//reading
//     out<<st;
//     in>>st2;
//     cout<<st2;
//     return 0;
// }
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int a=2102;
    ofstream out("sample.txt");
    out<<a;
    return 0;
}