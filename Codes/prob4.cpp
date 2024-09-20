#include<iostream>
using namespace std;

int main(){
    char line[4];
    // cout<<"Enter the "
    // cin>>line;

    for (int i = 0; i < 4; i++)
    {
       cout<<"Enter the elemets:-"<<endl;
        cin>>line[i];
    }
    
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    char word;
    cout<<"Enter the word:- "<<endl;
     cin>>word;
    //char u;

    for (int i = 0; i < key; i++)
    {
        
        char line[i]={word};
         cout<<line[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<line[i];
    }
    
}