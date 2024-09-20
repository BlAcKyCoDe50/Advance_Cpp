// #include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 
 
 void search(){
    int key;
    if(node*left=key)
 }
 
 void insert(){
    int item;
    cout<<"Enter the item you want to search.."<<endl;
    cin>>item;
 }

 
 struct node{
    int info;
    node*left;
    node*right;
    // node*root;

    

};
 node*insert(node*root,int info){
    node nptr=new node;
    nptr->info=info;
    nptr->left=NULL;
    nptr->right=NULL;

    node*ptr=root;
    node*pptr=NULL;
    while (ptr!=NULL)
    {
        pptr=ptr;
        if(info<ptr->info){
            ptr=ptr->left;
            
        }else{
            ptr=ptr->right;
        }
    }
    if(pptr==NULL){
        pptr=nptr;

    }
    else if(info<pptr->info){
        pptr->left-nptr;
    }
    else{
        pptr->right=nptr;
        return pptr;
    }
    
 }
 node*root=NULL,*nptr,
 main(){

    
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);


return 0;
}

