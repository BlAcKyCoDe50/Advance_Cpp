#include<iostream>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int temp;
    int sum=0;
    int total;
    int percentage;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if (arr[i]>100)
        {
            percentage=(arr[i]/sum)*100;
        }
        
        total=sum-percentage;
        
        
    }
    cout<<total;
    
        
        
        
    
    
    
    
}