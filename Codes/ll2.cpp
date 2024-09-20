#include<iostream>
using namespace std;
main(){
            int a=2;
            // int *pointer; 
           int  *pointer=&a; //<< in this * means pointer and >>pointer is a name 
           //of pointer like int "name" matlab star say hum pointer decalre karte h.
            // cout<<*pointer; <<<this will print the value
            cout<<"The adddress of a is "<<&a<<endl;
            cout<<"The value of a is "<<*pointer<<endl;
            



return 0;
}