#include<iostream>
using namespace std;


// void display(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Your element"<<i<<": "<<arr[i]<<endl;
//     }
    
// }


// void deletion(int arr,int n,int index){

//     for (int i = 0; i < n; i++)
//     {
//         arr[i]=arr[i+1];
//     }
    
// }


main(){
// cout<<
int n;
cout<<"Enter the size:- "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the elements of an array:- "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<"Your elements are:- "<<endl;
for (int i = 0; i < n; i++)
{
    cout<<"Element"<<" "<<i<<" is: "<<arr[i]<<endl;
}
int index;
cout<<"Enter the Index you want to delete:- "<<endl;
cin>>index;
// deletion(arr[],n,index);


for (int i = index; i < n; i++)
{
    arr[i]=arr[i+1];
}

// display(arr[],n)


if (index<n)
{

    cout<<"\nYour elements after Deletion:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
 
}
else{

    cout<<"\nInvalid Size";
}

cout<<sizeof(arr);




return 0;
}