#include<iostream>
using namespace std;

void insertion(int key,arr[n],loc){
    
            for (int i = 0; i < loc; i++)
            {
                arr[i]=key;
            }
            

}


main(){
            int n;
            cout<<"Enter the size:- "<<endl;
            cin>>n;
            int arr[n];

            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
            
            int key;
            cout<<"Enter the element you want to insert:- "<<endl;
            cin>>key;
            int loc;
            cout<<"Enter the location of element:- "<<endl;
            cin>>loc;

            insertion(key,loc,arr[]);

return 0;
}