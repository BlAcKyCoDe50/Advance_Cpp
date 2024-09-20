#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cin>>size;
    int arr[size];
    int first=0;
    int j;
    if(size>0 && size<25)
    {
        for(i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<size;i++)
        {
           first=arr[i]; 
            j=i-1;
            while(first<arr[j] && j>=0)
            {
                arr[j+1]=arr[j];
                --j;
            }
            arr[j+1]=first;
        }
        for(i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
 }
 }
}