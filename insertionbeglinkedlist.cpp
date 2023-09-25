#include<iostream>
using namespace std;
main(){
        void beg(){
           int item,info;
            cout<<"ENter the element want to store:-"<<endl;
            cin>>item;
            if (head==NULL){
                nptr= new node;
                nptr->info=item;
                head=nptr;
                nptr->link=head;
                cout<<"Operation Successfull"<<endl;
            }
            else
            {
                nptr= new node;
                nptr->info=item;
                nptr->link=head;
                ptr=head;

            }
            while (ptr->link!=head)
            {
                ptr=ptr->link;
            }
            ptr->link=nptr;
            head=nptr;
            
           
        }
//return 0; 

}