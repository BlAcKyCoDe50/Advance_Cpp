#include<iostream>
using namespace std;

main(){
    int item;
    
           return 0;
}

void traverse()
{   
     int item;
    cout<<"Enter the value you want to insert:- "<<endl;
    cin>>item;
    if(head==NULL){

        nptr=new node;
        nptr->info=item;
        nptr->plink=NULL;
        nptr->flink=NULL;
        head=nptr;
        cout<<"\nItem Inserted"<<endl;

    }
    
    nptr->info=item;
    nptr->plink=NULL;
    nptr->flinl=NULL;
    

    


    

}