#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    for ( i = 1; i<=n; i++)
    {
        /* code */
        if(i==1 || i==n){
            for(j=1;j<=n;j++)
            cout<<"* ";
        }
        else{
            if(i<=(n/2+1))
            {
                for(j=1;j<=(n/2+2-i);j++)
                cout<<"* ";
                for(j=1;j<=2*(i-1)-1;j++)
                cout<<"  ";
                for(j=1;j<=(n/2+2-i);j++)
                cout<<"* ";
            }
            else
            {
                for(j=1;j<=(i-n/2);j++)
                cout<<"* ";
                for(j=1;j<=2*(n-i)-1;j++)
                cout<<"  ";
                for(j=1;j<=(i-n/2);j++)
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}