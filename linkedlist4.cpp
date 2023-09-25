#include<iostream>
using namespace std;

class Node{
      public:  
        
        int data;
        Node*next;

Node(int data){                 //Constructor 
        this->data=data;  // this keyword is used jab class ke andar constructor ya function ho or humko uss class ya 
        this->next=NULL;                       // function may parent class ka data use krna ho jiska name same he waha pr this keyword 
                                // use hota he. 


}


};
void Insertathead(Node *head,int d){
        Node *temp= new Node(d);
        temp->next=head;
        head=temp;
}
void insertattail(Node*tail,int d){
        Node *temp= new Node(d);
        tail->next=temp;
        tail= temp;
}
void traverse(Node * &head){
        Node *temp=head;
                while (temp!=NULL)
                {
                        cout<<temp->data<<" ";
                        temp=temp->next;
                        // cout<<
                }
                cout<<endl;
}



main(){
        Node* node1=new Node(10);
        // cout<<"Data:- "<<node1->data;
        Node*head=node1;
        Node* tail=node1;
         cout<<(head);
        
        Insertathead(head,5);
        cout<<head;
        Insertathead(head,10);
        insertattail(tail,11);
        // Insertathead(head,30);
        traverse(head);



return 0;
}