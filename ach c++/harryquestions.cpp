#include <iostream>
#include<cmath>
using namespace std;
class calc
{
private:
    float a, b;

public:
    int add(float q, float r){
  return (q+r);
    }
    int sub(float q, float r){
    return (q - r);
    }
  int mul(float q, float r){
return (q * r);
    }
    int div(float q, float r){
         
        return(q / r);
    }
    void display(calc s, float c,float d)
    {
        cout<<"The sum is: "<<s.add(c,d)<<endl;
    cout<<"The sum is: "<<s.sub(c,d)<<endl;
    cout<<"The sum is: "<<s.mul(c,d)<<endl;
    cout<<"The sum is: "<<s.div(c,d)<<endl;
    }
};
class scientificcalc{
public:
void get_data(){
    cout<<"the value of a is"<endl;
    cin>>a;
    cout<<"the value of b is"<endl;
    cin>>b;
}
void perform_operations(){
      cout<<"The sin is: "<<sin(a)<<endl;
    cout<<"The exp is: "<<exp(b)<<endl;
    cout<<"The cos is: "<<cos(b)<<endl;
    cout<<"The tan is: "<<tan(b)<<endl;
}
};
int main()
{
    calc ab,t;
    float c,d;
   cout<<"the value of C  is:";
cin>>c; 

cout<<"the value of d  is:";
cin>>d;
    ab.display(t,c,d);
    // cout<<"The sum is: "<<ab.add(2,3)<<endl;
    // cout<<"The sum is: "<<ab.sub(2,3)<<endl;
    // cout<<"The sum is: "<<ab.mul(2,3)<<endl;
    // cout<<"The sum is: "<<ab.div(2,3)<<endl;
    scientificcalc sci;
    sci.get_data();
    sci.perform_operations();
    return 0;
}