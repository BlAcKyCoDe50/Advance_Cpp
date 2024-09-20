#include<iostream>
using namespace std;

 main(){
        int n;
        cin>>n;
        int arr[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>i;
        }
       
        for (int j = 0; j < n; j++)
        {
            if (arr[j]%2==1)
            {
               arr[j]=NULL;
                cout<<arr[j];
            }
            //break;
        }
            else{
                for (int i = 0; i < n; i++)
                {
                    cout<<arr[i];
                }
            }
        
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<arr[i];
        // }


 return 0;
 }