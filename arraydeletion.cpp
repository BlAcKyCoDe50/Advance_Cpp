// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
int pos;
cout<<"Enter the Index:- "<<endl;
cin>>pos;
for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
}
n--;
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}