#include<iostream>
// #include<stdio.h>
using namespace std;

 


void push(){
    int data;
    int max;
    int stack[5];
    int top;
    if(top==max-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else{
        cout<<"Enter the elements to be inserted:- "<<endl;
        cin>>data;
        top=top+1;
        stack[top]=data;
    }
    
}
void delete(){
    int data;
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return;
    }
    else{
        data=stack[top];
        top=top-1;
        cout<<"Deleted data is "<<data;
    }
}

int main(){
    
   push();

    }

