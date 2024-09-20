#include<iostream>
using namespace std;

//int linearsearch(int arr[],int key)


 main()
{
    int n;
    
    cout<<"Enter the size of elements:- "<<endl;
    cin>>n;
    int array[n];

    for (int  i = 0; i<=n; i++)
    {
        
        cin>>array[i];
        cout<<"Enter the element"<<i<<"of array:- ";
        
    }
    for (int  i = 0; i<=n; i++)
    {
        cout<<"Elements of array are:- ",array[i];
        break;
    }
    
    
        

        



return 0;
}