#include<iostream>
using namespace std;
main(){
          int n,i,j;
          int count=1;
          cout<<"Enter the input"<<endl;
          cin>>n;

          for(i=1;i<=n;i++){

            for(j=1;j<=i;j++){

                cout<<count<<" ";
                count++;
            }
             cout<<endl;

        }

           

return 0;
}