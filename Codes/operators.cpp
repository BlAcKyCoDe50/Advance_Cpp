#include<iostream>
using namespace std;
main(){

    int a,work,i,operation;

cout<<"Enter the number which you want to increment or decrement:- "<<endl;
cin>>a;

cout<<"You want 'DECREMENT' (d) or 'INCREMENT' (i) "<<endl;
cin>>work;

switch (work)
{
case 'i' :
    operation=(a++);
    cout<<"Your incremented number is :- "<<endl;
    cout<<operation;

    break;
case 'd':
        operation=(a--);
        cout<<"Your decremented number is :- "<<endl;
        cout<<operation;
default:
    
    cout<<"Enter the valid input"<<endl;
    break;
}


return 0;
}