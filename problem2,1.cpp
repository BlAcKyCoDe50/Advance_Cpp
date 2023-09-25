#include<iostream>
using namespace std;

int main(){
       int n;
       
       cin>>n;
       int arr[n];
       for (int  i = 0; i < n; i++)
       {
         cin>>arr[i];
       }
       int index_number;
       cin>>index_number;
       for (int  i = index_number; i < n ; i++)
       {
         arr[i]=arr[i+1];
       }
       n--;

       for (int  i = 0; i < n; i++)

       {
         cout<<arr[i];
       }
       
       


}