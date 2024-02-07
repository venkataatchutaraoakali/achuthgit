#include<iostream>
using namespace std;

int main(){
    int itemcode;
    char itemname[20];
    float amount;
    cout<<"the available medicines:"<<endl;
    cout<<"itemcode:0001"<<endl;
  cout<<"itemcode:0002"<<endl;
    cout<<"itemcode:0003"<<endl;
      cout<<"itemcode:0004"<<endl;
        cout<<"itemcode:0005"<<endl;
          cout<<"itemcode:0006"<<endl;
          cout<<"enter the item code of your required item:";
          cin>>itemcode;
          if(itemcode==0001){
            cout<<"dolo 650"<<endl;
          }
          if(itemcode==0002){
            cout<<"dolo 450"<<endl;
          }
          if(itemcode==0003){
            cout<<"paracetmol"<<endl;
          }
          if(itemcode==0004){
            cout<<"dettol"<<endl;
          }
          if(itemcode==0005){
            cout<<"liquid hand wash"<<endl;
          }
           if(itemcode==0006){
            cout<<"utensils"<<endl;
          }
        else {
            cout<<"not available"<<endl;
        }
        for(int i=0001;i<=itemcode;i++){
            amount=itemcode*i;
        }
        cout<<amount;
        int tot_items;
        cin>>tot_items;

    return 0;
}