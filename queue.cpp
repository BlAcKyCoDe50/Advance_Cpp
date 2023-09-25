#include<iostream>
using namespace std;

string queue[100];
int maxqueue=100,head=-1,tail=-1;
string  val;
void insert(string value)
{
    if(tail>=maxqueue-1){
        cout<<"Queue underflow"<<endl;
    }
    else if (head==tail && head==-1)
    {
        head++;
        tail++;
        queue[tail]=val;
    }
    else{
        tail++;
            queue[tail]=val;
    }


}
void display(){
    
    if (tail==-1){
    cout<<"You have not entered the value!!!the queue is Empty"<<endl;
    }
    else{
        cout<<"Elments of an Queue are:- "<<endl;
        for (int i = -1; i < tail; i++)
        {
            cout<<queue[i]<<endl;
        }
        
    }
}
int main(){

    string val;
    cout<<"Enter the value you want to insert:- "<<endl;
    cin>>val;

    insert(val);
    cout<<"Value inserted"<<endl;
    display();
}
