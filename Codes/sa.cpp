#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */

int t;
cin>>t;
         while(t--){
         int arr[6];
         for(int i = 0; i < 6; i++){
                cin>>arr[i];
         }
          int max = arr[0];
          for(int i = 1; i < 6; i++){
            if(arr[i] > max){
             max = arr[i];
                       }
                       }
                cout<<max<<endl;
                    }
return 0;
                       }