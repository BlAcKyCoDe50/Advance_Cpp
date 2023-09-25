#include <iostream>
// #include<string.h>

using namespace std;
string stack[10];
int a=15, top=-1;
void push(string value)
{
    if(top>=a-1)  
    cout<<"Stack Overflow"<<endl; 
    else
    {
    top++;  
        stack[top]=value;  
    }
}

void remove()
{
    if(top<=-1)
    {
        cout<<"Stack Underflow"<<endl; 
    }
    else
    {
        cout<<stack[top]<<endl; 
        top--;
    }
}

void print()
{
    if(top>=0)
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
            
        }
    }
    else 
    cout<<"\a Stack is null";
}



int main()
{
    int cha;
    string key;
    do{
        cin>>cha;
        switch(cha)
        {
            case 1:{
                cin>>a;
                for(int i=0;i<a;i++)
                {
                    cin>>key;
                    push(key);
                }
                break;
            }
            case 2:{
                remove();
                print();
                break;
            }
            default:{
                cout<<"No color found!!";
                break;
            }
        }
    }
    while(cha!=2);
    

    return 0;
}