#include<iostream>
using namespace std;
main(){
       int a=10;
       int*aptr;  //<<<-this started pointing to the int(a);
       aptr=&a;

       cout<<&a<<endl; //<<- it prints the address of int(a);
       cout<<aptr<<endl;

       cout<<*aptr<<endl;
        *aptr=20;
        cout<<*aptr<<endl;

return 0;
}