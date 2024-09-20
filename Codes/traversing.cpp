#include<iostream>
using namespace std;

int main(){
        int size;
        cout<<"Enter the size of an array:- "<<endl;
        cin>>size;
        int array[size];

        for (int i = 0; i < size; i++)
        {
            cout<<"ENter the "<<i+1<<"th element"<<endl;
            cin>>array[i];
        }
        cout<<"Your Array Elelements are:- "<<endl;
        for (int i = 0; i < size; i++)
        {
            // cout<<"Your elements are:- "<<endl;
            cout<<array[i]<<endl;
        }
        int ans;
        cout<<endl<<"Do you want to sort   the array:- "<<endl;
        cout<<"1.YES // 2.NO "<<endl;
        cin>>ans;
        int temp;
        if (ans==1)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = i+1; j < size; j++)
                {
                    if (array[i]>array[j])
                    {
                        temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;
                    }
                    
                }
                
            }
            cout<<endl<<"Your sorted elements are:- "<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<array[i]<<"  "<<endl;
        }
            
        }
        int ans1;
        cout<<"Do you want searching of an element"<<endl;
        cout<<"1.YES // 2.NO "<<endl;
        cin>> ans1;

        if (ans1==1)
        {
            int key;
            cout<<"Enter the element you want to search:- "<<endl;
            cin>>key;

            for(int i=0;i<size;i++){

                if(array[i]==key){

            cout<<"Your key found on position "<<endl;
            return i;
                        }
        
        }
        }

}
        
        
        

