#include <bits/stdc++.h>
using namespace std;

struct Node {
int info;
struct Node *left, *right;
};

Node *newNode(int item)
{
Node* nptr = new Node;

nptr->info = item;

nptr->left = NULL;
nptr->right = NULL;

return nptr;
}

Node* insert(Node* root, int info)
{
Node* nptr = newNode(info);

Node* ptr = root;

Node* pptr = NULL;

while (ptr != NULL) {
pptr = ptr;
if (info < ptr->info)
ptr = ptr->left;
else
ptr = ptr->right;
}

if (pptr == NULL)
pptr = nptr;

else if (info < pptr->info)
pptr->left = nptr;

else
pptr->right = nptr;

return pptr;
}

void inorder(Node*root){

    if (root==NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->info<<" ";
        inorder(root->right);
    }
}
void preorder(Node*root){
    if(root==NULL){
        return;
    }

    else{
        cout<<root->info<<" ";
        preorder(root->left); 
        preorder(root->right);
    }
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->info<<" ";
    }
    
}
void find(int item,Node**par,Node**loc){
    node* ptr,*ptrsave;
    if(root==NULL){
        *loc=NULL;
        *par=NULL;
        return;

    }
    if(item==root->info){
        *loc=root;
        *par=NULL;
        return;
    }
if (item<root->info){
    ptr=root->left;
else{
    ptr=root->right;
    ptrsave=root;
    while (ptr!=NULL)
    {
        if(item==ptr->info){
            *loc=ptr;
        }
    }
    
}
}
}


    



int main()
{


Node* root = NULL;
root = insert(root, 50);
insert(root, 30);
insert(root, 20);
insert(root, 40);
insert(root, 70);
insert(root, 60);
insert(root, 80);
cout<<"\nYour Inorder Traversal is:- "<<endl;
inorder(root);

cout<<"\nYour Preorder Traversal is:- "<<endl;
preorder(root);
cout<<"\nYour Postorder Traversal is:- "<<endl;
postorder(root);





return 0;
}