#include<iostream>
using namespace std;
main()
{
int size,pos,item;
int arr[size];
cout<<"Enter the size of an array:- "<<endl;
cin>>size;

cout<<"\nEnter the array elements"<<endl;
for(int i=0;i<size;i++)
{
cout<<"Enter the"<<i<<"th Element"<<endl;
cin>>arr[i];
}
cout<<"\nEnter the ITEM  for insertion"<<endl;
cin>>item;
cout<<"Enter Position for Insertion "<<endl;
cin>>pos;
for(int i=0;i=pos;i++)
{
arr[i]=pos;
}
// a[k]=item;
cout<<"\nElements after insertion";
for(int i=0;i<=size;i++)
{
cout<<arr[i]<<" "<<endl;
}
}