#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int array[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    int position;
    cin>>position;
    position--;
    for (int  i = position; i < size; i++)
    {
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
    for (int i = 0; i < size-1; i++)
    {
        cout<<array[i]<<" ";
    }
    

             

return 0;
}