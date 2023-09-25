#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    if(size > 0 && size <= 20){
    int array[size];
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    
    sort(array, array + size);
    
    if(size < 3)
    {
        cout<<"Not sufficient elements";
    }
    else{
        cout<<array[size - 3];
    }
    }
    else{
        cout<<"Invalid array size";
    }
    return 0;
}