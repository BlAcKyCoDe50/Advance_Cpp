   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    class Base
    {
        public:
            void show()
            {
                cout<<"showing the base function"<<endl;
            }
    };

    class child 
    {
        public:
        void show()
        {
            cout<<"hello from the child class"<<endl;
        }
    };

    class derived : public Base , public child
    {
        public:
        int i=0;
        void show()
        {
            cout<<"hello from derived class: "<<i<<endl;
            i++;
            derived :: show();
        }
    };


main(){
 
 //ambiguity 1
 derived d;
 d.show();

 return 0;
 }