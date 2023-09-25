#include<iostream>
using namespace std;

struct node{
    node*agla;
    int data;

};

void insert(int value){

    node* head=NULL;
    node*newnode=new node();
    newnode->data=value;
    newnode->agla=newnode;
    newnode=head;
}

void display(){
     struct node*head;
    node*ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr->agla;
        
    }
    

}


main(){
int a,b;
cin>>a,b;
insert(a);
insert(b);
display();

return 0;
}