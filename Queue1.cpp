#include<iostream>
using namespace std;
struct node{
    int info;
    node*link;
};
node*head=NULL,*ptr,*nptr;
void enqueue();
void Dequeue();
void traverse();

main(){
    cout<<"\n Press 1 for instertion:- ";
    cout<<"\n Press 2 for Deletion:- ";


return 0;
}

void enqueue(){
    
    int item;
    
    if(head==NULL){
        nptr=new node;
        cout<<"\n Enter the info:- ";
        cin>>item;
        nptr->info=item;
        nptr->link=NULL;
        head=NULL;
        cout<<"\n Node Inserted:)";

    }
    else{
        nptr= new node;
        cout<<"\n Enter the item:- ";
        cin>>item;
        nptr->info=item;
        ptr=head;
        while (ptr->link!=NULL)
        {
            ptr=ptr->link;
            nptr->link=NULL;
            cout<<"\n Node Inserted:)";
        }
        
    }
}