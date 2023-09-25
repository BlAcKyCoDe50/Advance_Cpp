#include<iostream>
using namespace std;
main(){           //instertion at end of an array
int n;
   int arr[n];
   cout<<"Enter the size of an array:-"<<endl;
   cin>>n;
   cout<<"enter the elements of an array:- "<<endl;
   for ( int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
    int element;
    cout<<"Enter the element want to insert:- "<<endl;
    cin>>element;
    arr[i]=element;
    int pos;
    cout<<"Enter the position of insertion:- "<<endl;
    cin>>pos;

      for (int i = 0; i < pos; i++)
      {
         cin>>arr[i];
      }
      

   cout<<"YOur elements are as follows:'- "<<endl;
   for (int i = 0; i < n; i++)

   {
      cout<<arr[i];
   }
   
return 0;
}