#include <iostream>
using namespace std;
class stduent
{
protected:
    int roll_numb;

public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void stduent::set_roll_no(int r)
{
    roll_numb = r;
}
void stduent::get_roll_no()
{
    cout << "the roll no of the student is" << roll_numb << endl;
}
class exm:public stduent{
protected:
float maths;
float phy;
public:
void set_marks(float,float);
void get_marks(void);
};
void exm::set_marks(float m1,float m2){
maths=m1;
phy=m2;
}
void exm::get_marks(){
    cout<<"the marks obtained in maths are:"<<maths<<endl;
cout<<"the marks obtained in phy are:"<<phy<<endl;
}
class result:public exm{
float percent;
public:
void display(){
    cout<<"the percentageg obtained by you is "<<(maths+phy)/2<<endl;

}
};
int main()
{
result ach;
ach.set_roll_no(2102);
ach.get_roll_no();
ach.set_marks(95.0,95.5);
ach.get_marks();
ach.display();

    return 0;
}