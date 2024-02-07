#include <iostream>
using namespace std;

int main()
{
    int n;
    int t=1;
    cin >> n;
    // 1 0 1 0 1 0 1*/
    for (int i = 1; i <=n ; i++)
    {
        /* code */
    
        for (int j = 1; j <=(n-i); j++)
        {
               cout << "  ";

            }
        
        for (int j = 1; j <=2*(i-1)-1; j++)
        {
            /* code */
            cout<<t<<" ";
            t=(t+1)%2;
        }
        cout<<endl;
    }
         return 0;
    }

   
