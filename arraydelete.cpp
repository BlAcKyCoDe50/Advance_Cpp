#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[n];
        // cout<<"Enter the size :- "<<endl;
        // cin>>n;
        cout<<"Enter the elements of an array:- "<<endl;
        
        for(int i=0;i<n;i++){
            
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<"Your element "<<i <<"is :-"<<arr[i]<<endl;

        }
        int answers;
        cout<<"Enter the Operation to perform on the Array:- "<<endl;
        cout<<"1.Deletion\n2.Sorting\n"<<endl;
        cin>>answers;

        switch (answers)
        {
        case 1:
            int key;
            cout<<"Enter the element you want to delete:l- "<<endl;
            cin>>key;
            
            for (int i = 0; i < n; i++)
            {
                if (arr[i]==key)
                {
                    for (int j = i; j < key; j++)
                    {
                       arr[j]=arr[j+1];
                    }
                    
                }
                }
                
                cout<<"Deleted elements are:- "<<endl;
                for (int i = 0; i < n; i++)
                {
                    cout<<arr[i];
                }

                
            
            
            
            break;
        
        default:
            break;
        }



return 0;
}