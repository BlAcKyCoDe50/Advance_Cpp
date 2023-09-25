#include<iostream>
using namespace std;

class  Node{
public:
    int data;
    Node*next;  ///<<<<creating a pointer name next
};

main(){
  Node*head=NULL;
  // node*one=NULL;
  Node*two=NULL;
  Node*three=NULL;
  // node*four=NULL;
  // node*five=NULL;

  head=new Node();  ///new means it is allocatin the new node and giving the size to the pointer 
  two=new Node(); //jagah bana rahay hey nodes k ley bas eetna samajh
  three=new Node();
  // *four=new node();
  // *five=new node();

 
  head->next=two;
  
  // one->data=1;
  // one->next=two;

  two->data=2;
  two->next=three;

  three->data=3;
  three->next=NULL;

  // four->data=4;
  // four->next=five;

  // five->data=5;
  // five->next=NULL;

  
   

  


  

return 0;
}