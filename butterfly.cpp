#include<iostream>
using namespace std;
main()
{
         int n;
             cout<<"Enter the input"<<endl;
             cin>>n;

             for(int i=1;i<=n;i++){

                for(int j=1;j<=i;j++){

                    cout<<"*";

                }
                 int space=2*n-2*i;
                 for( int j=1;j<=space;j++){
                    cout<<" ";
                 }
                 for (int j =1;j<=1;j++){
                    cout<<" ";
                 }
                 
                 //for upper to lower printing of star..
                 for(int i=1;i<=n;i--){

                for(int j=1;j<=i;j++){

                    cout<<"*";

                }
                 int space=2*n-2*i;
                 for( int j=1;j<=space;j++){
                    cout<<" ";
                 }
                 for (int j =1;j<=1;j++){
                    cout<<" ";
                 }
                 cout<<endl;
                 }


return 0;    

}
}
     