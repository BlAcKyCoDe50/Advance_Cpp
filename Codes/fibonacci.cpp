#include<iostream>
using namespace std;

  void fib(int n){

    int t1=0;
    int t2=1;
    int nexterm;

    for (int  i = 0; i <=n; i++)
    {
        cout<<t1<<endl;
        int nextterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
    
 }





main(){

    int n;
    cin>>n;

    fib(n);


return 0;
}