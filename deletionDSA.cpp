#include<iostream>
using namespace std;
main()
{

      int a[10];
      int n,k,item;
      cout<<"\nEnter the number of elements you want to store";
      cin>>n;
      cout<<"\nEnter the array elements";
      for(int i=0;i<n;i++)
      {
        a[i+1]=a[i];

      }
      a[k]= item;
      cout<<"/nElements after insertion";
      for(int i=0;i<=n;i++)

      {
        cout<<a[i]<<" ";
      }
      
  }


