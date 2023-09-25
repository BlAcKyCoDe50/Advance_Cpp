#include<iostream>
using namespace std;
main(){
        int n;
        cout<<"Enter the size of an array:- "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array:- "<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<"Your array is:- "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
        int key;
        cout<<"Enter the element you want to search:- "<<endl;
        cin>>key;

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; i < key ; j++)
            {
                if (arr[i]==key)
                {
                    cout<<"found at"<<arr[i]<<endl;
                    break;
                }
                // else{
                //     cout<<"Element not found"<<endl;
                // }
            }
            
        }
        
        

return 0;
}