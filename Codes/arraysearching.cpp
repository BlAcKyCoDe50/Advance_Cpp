#include <iostream>
using namespace std;


int search(int arr[],int n,int key){

    for(int i=0;i<n;i++){

        if(arr[i]==key){

            cout<<"Your key found on position "<<endl;
            return i;
        }
    
        

    
}
}


 int main(){
    
    
    int n;
     cout<<"Enter the size of array:- "<<endl;
    cin>>n;
   
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the Element1 of array:- "<<endl;
        cin>>arr[i];
        
    }
     int key;
      cout<<"Enter the key you want to search:- "<<endl;
      cin>>key;
      
      
         
    cout<<search(arr,n,key)<<endl;
   
 }