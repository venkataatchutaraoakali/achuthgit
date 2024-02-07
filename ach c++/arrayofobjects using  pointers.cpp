#include<iostream>
using namespace std;
class shop{
int id;
float price;
public:
void set_data(int a,float b){
    id=a;
    price=b;
}
void get_data(void){
    cout<<"code of this item is "<<id<<endl;
    
    cout<<"price of this item is"<< price<<endl;
}
};
int main(){
 int size=3;
 //int *ptr=&size;

 shop *ptr=new shop[size];
 shop *ptrtemp=ptr;
 int p,i;
 float q;
for (i = 0; i < size; i++)
{
    /* code */
    cout<<"id and price of item "<<i+1<<endl;
    cin>>p>>q;

    //*(ptr).getdata(p,q);
    ptr->set_data(p,q);
    ptr++;
}
for (int i = 0; i < size; i++)
{
    /* code */
    cout<<"item number:"<<i+1<<endl;
    ptrtemp->get_data();
    ptrtemp++;
}


    return 0;
}