#include<iostream>
using namespace std;
main(){
        char name;
        int age;
        cout<<"Enter your name:- "<<endl;
        cin>>name;
        cout<<"Your name is "<<name<<endl;
        cout<<"Enter your age;- ";
        cin>>(age);

        do
        {
            if (age>18)
            {
                cout<<"You are  matured:)";
            }
            else{
                cout<<"You are not matured";
            }
            cin>>age;
            cout<<age;
            
        } while (age>18)
            
            

        


return 0;
}