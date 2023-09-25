#include <stdio.h>
#include <iostream>
using namespace std;
struct node
{int info;
node *plink;
node *flink;
};

node *head=NULL, *tail=NULL, *ptr, *nptr;
int item;
void traverse();
void insertAtStart();
//void insertAtLoc();
void insertAtEnd();
void deleteAtStart();
void deleteAtEnd();
void deleteAtLoc();

main()
{
int ch;
while(1)
{ cout<<"\n Press 1 for Traversal: ";
cout<<"\n Press 2 for insert at Start: ";
cout<<"\n Press 3 for insert at Loc: ";
cout<<"\n Press 4 for insert at End: ";
cout<<"\n Press 5 for Delete at Start: ";
cout<<"\n Press 6 for Delete at End: ";
cout<<"\n Press 7 for Delete at Loc: ";
cout<<"\n Press 8 for Exit: ";
cout<<"\n Enter the choice: ";
cin>>ch;
switch(ch)
{case 1:
traverse();
break;
case 2:
insertAtStart();
break;
//case 3:
// insertAtLoc();
// break;
case 4:
insertAtEnd();
break;
case 5:
deleteAtStart();
break;
case 6:
deleteAtEnd();
break;
case 7:
deleteAtLoc();
break;
case 8:
exit(0);
default:
cout<<"Wrong choice!!";
}
}
}

void insertAtStart(){

cout<<"\nEnter the item";
cin>>item;
nptr = new node;
nptr->info=item;
nptr->flink;


if(head == NULL){
nptr->plink=NULL;
nptr->flink=NULL;
head = nptr;
tail = nptr;
cout<<"\nNode Inserted";
}
else{
nptr->plink=NULL;
nptr->flink=head;
head->plink=nptr;
head=nptr;
cout<<"\n Node Inserted";
}
}

void traverse(){
ptr= head;
while(ptr!=NULL){
cout<<ptr->info<<" ";
ptr=ptr->flink;
}
}



void insertAtEnd(){

cout<<"\nEnter the item";
cin>>item;
nptr = new node;
nptr->info=item;

if(head == NULL){
nptr->plink=NULL;
nptr->flink=NULL;
head = nptr;
tail = nptr;
cout<<"\nNode Inserted";
}
else{
ptr=tail;
nptr->info=item;
nptr->plink=ptr;
nptr->flink=NULL;
ptr->flink=nptr;
tail = nptr;
cout<<"\n Node Inserted in last";
}
}


void deleteAtStart(){
if(head == NULL)
cout<<"Underflow";
else
{
head=head->flink;
head->plink=NULL;
cout<<"Node Deleted!";
}
}

void deleteAtEnd(){
if(head == NULL)
cout<<"Underflow";
else
{
tail=tail->plink;
tail->flink=NULL;
cout<<"Node Deleted!";
}
}

void deleteAtLoc(){
int val;
cout<<"Insert the value to be deleted.";
cin>>val;
ptr= head;
while(ptr->info!=val){
ptr=ptr->flink;
}
ptr->plink->flink=ptr->flink;
ptr->flink->plink=ptr->plink;
cout<<"Node Deleted!";
}