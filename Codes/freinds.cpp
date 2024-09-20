#include<iostream>
using namespace std;
main(){
       int n=5;
       int array[n]={4,8,3,6,2};
       
       for (int  i = 0; i < n; i++)
       {
         cout<<array[i]<<endl;
        }
        int key;
       cin>>key;

       key-1;
       for (int i = key; i < n; i++)
       {
         int temp=array[i];
         array[i+1]=temp;
       }
       
       for (int i = 0; i < key-1; i++)
       {
         cout<<array[i]<<endl;
       }
       
       
       


return 0;
}