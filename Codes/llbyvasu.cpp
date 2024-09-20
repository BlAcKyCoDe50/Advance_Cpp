// #include<stido.h>
#include<iostream>
using namespace std;
struct node{
    node *plink;
    node *flink;
};

    node *head=NULL, *tail=NULL,*ptr,*nptr;
    int item;

int main(){
void traverse(){
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->info<<"";
        ptr=ptr->flink;
    }
}
return 0;
}