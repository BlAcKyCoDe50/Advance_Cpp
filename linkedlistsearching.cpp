#include<iostream>
using namespace std;
int main(){

int ptr;
    //transverse()
    {
        if(head==NULL){
            cout<<"Empty list ";
        }
        else{
            ptr=HEAD;
            while (ptr->link!=HEAD){
                cout<<ptr->info;
                ptr=ptr->link;
            }
            {
                /* code */
            }
            
        }
    }
}



    