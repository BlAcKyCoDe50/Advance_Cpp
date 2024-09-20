#include<iostream>
using namespace std;

struct node{
    
    node* next;
    int data;   //>>>>>>>> making the node
    node*tail;
};


node* head = NULL;   ////>>>>>> declaring the head.


void insertAtBegin (int new_data){     ///>>>>making the function newdata is used in the main function see the main function
    struct node* new_node=new node();   ////allocating the memory in the heap
    new_node->data= new_data;    ////no need to explain
    new_node->next=head;
    head=new_node;   ////because the first node in the linked list is the header
    //cout<<&new_node; adresses are the same
     
         
}
void insertattail(node*&tail,int value){
    node* new_node= new node(value);
    tail->next=new_node;
    tail=tail->next;
          

}





void display(){

    struct node*pointer;
    pointer=  head;
    while(pointer!=NULL){
        cout<<pointer->data<<" ";
        pointer=pointer->next;
    }
}


main(){
 

insertAtBegin(1);
cout<<head<<endl;
insertAtBegin(2);
cout<<head<<endl;
insertAtBegin(3);
cout<<head;
insertAtBegin(4);
cout<<head;
insertAtBegin(5);      //This will insert the values in starting and starting node of linked list is HEAD
// insert(10);
display();
 


// cout<<

return 0;
}