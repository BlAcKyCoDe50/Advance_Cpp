#include<iostream>
using namespace std;

int search(int arr[],int n,int key){

    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            cout<<"Your Element found at the position..!!"<<arr[i]<<endl;

            return i;


        }
        
    }
    
}


main(){
        int n;
        int arr[n];
        cout<<"Enter the size:- "<<endl;
        cin>>n;

        for (int i = 0; i < n-1; i++)
        {
            cin>>arr[i];
        }

        search(arr,n)
        

return 0;
}