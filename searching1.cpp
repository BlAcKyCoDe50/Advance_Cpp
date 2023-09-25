#include<iostream>
using namespace std;

int main(){
           int i;
           int n=11;
           //cout<<"Size"<<endl;
           //cin>>n;
           int arr[n];
           //cout<<"elements"<<endl;
           for (int i = 0; i < n; i++)
           {
             //cout<<"Enter the elements:- "<<endl;
             cin>>arr[i];
           }
           
           int key;
           //cout<<"key"<<endl;
           cin>>key;

           for (int i = 0; i < n; i++){
    
        if (arr[i]==key)
        {
          cout<<i;
          break;
        }

        }
         
        if(i==11){  
              cout<<"Number not found";
        }
          

return 0;
}