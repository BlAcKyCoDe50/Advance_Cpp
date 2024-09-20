#include<iostream>
using namespace std;
struct node{
    node* next;
    
    int data;
};


int main(){

int n,data;




node* head=new node();
node* pehla= new node();
node* second=new node();
node* third= new node();// we are allocating the space in the heap;

cout<<"Enter the value of value 1 "<<endl;
cin>>data;



head->next=pehla;
pehla->data;
pehla->next=second;
second->data;                 //Allocating the values and pointing them.
second->next=third;
third->data;
third->next=NULL;


cout<<"the value of the header of the linked list\n"<<head->next;
cout<<pehla->data<<endl;
cout<<"the value of the pehla next :- "<<pehla->next<<endl;
cout<<second->data<<endl;
cout<<third->data<<endl;
cout<<third->next<<endl;



return 0;
}