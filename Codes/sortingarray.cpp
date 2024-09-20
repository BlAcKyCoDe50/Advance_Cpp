#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array :- "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array:- "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element"<<i+1<<endl;
        cin>>arr[i];
    }
    
    cout<<"Your entered elements are:- "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\t"<<endl;
    }
    int t;

    for (int  i = 0; i < size; i++)
    {
       for (int j = i+1; j < size; j++)
       {
         if(arr[i]>arr[j]){
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
             

         }

       }
        
    }
    
    
 cout<<"Elements after Sorting:- "<<endl;
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
  
}