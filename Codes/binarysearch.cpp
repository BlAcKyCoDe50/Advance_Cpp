#include<iostream>
using namespace std;

 int binarysearch(int array[],int n,int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
 }



int main(){
           int n;
           cout<<"Enter the size of an Array:- "<<endl;
           cin>>n;

           int array[n];
           for(int i=0;i<=n;i++){
            cout<<"Enter the elements of array:- "<<endl;
            cin>>array[i];
           }
             int key;
             cout<<"Enter the element you want to search:- "<<endl;
             cin>>key;

             cout<<binarysearch(array,n,key)<<endl;
return 0;
}