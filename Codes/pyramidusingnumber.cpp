#include<iostream>
using namespace std;
main(){
         int n,j,i;
         cout<<"Enter the row:- ";
         cin>>n;
          
        for ( i = 0; i<n; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                cout<<i<<" ";
                
            }
            cout<<endl;
        }
        

return 0;
}