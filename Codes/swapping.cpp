#include<iostream>
using namespace std;

void swap(int a,int b){

    a=a+b;
    b=a-b;
    a=a-b;
}


main(){
//Swapping of two numbers
int a=2;
int b=3;
swap(2,3);
cout<<a<<b;




return 0;
}