#include<iostream>
using namespace std;


void search(int key,int array[])
{
    cout<<"Enter the element you want to search:- "<<endl;
    cin>>key;

    for (int  i = 0; i < key; i++)
{
   if ( array[i]==key)
    {
        cout<<"\nYour Elment Found on Position:- "<<array[i];

    }
    
}

    
}



int main(){



        int size,key;
        int array[size];
        cout<<"Enter the size of an Array:- "<<endl;
        cout<<"Enter the elements of an Array:- "<<endl;
        for (int  i = 0; i < size; i++)
        {
            cin>>array[i];
        }
        

        
        search(key,array);
    return 0;

}
