#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
    int info;
    node *plink;
    node *flink;

};

node *head=NULL,*tail=NULL,*ptr,*nptr;
int item;
void traverse(){
    ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->info<<"";
        ptr=ptr->flink;
    }
    traverse();
}
