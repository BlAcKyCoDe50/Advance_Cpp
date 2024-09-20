   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   class A
   {
    public:
        int a = 10;
        void display()
        {
            cout<<"Hello from base class"<<a<<endl;
        }

        void greet()
        {
            cout<<"greetings from A class"<<endl;
        }
   };

   class B : public virtual A
   {
    public:
    
        void display()
        {
            a++;
            cout<<"Hello from B class"<<a<<endl;
        }
   };

   class C : public virtual A
   {
    public:
        public:
        void display()
        {
            a = a+2;
            cout<<"Hello from C class "<<a<<endl;
        }
   };

    class D : public virtual  B , public virtual  C
    {
        public:
        void display()
        {
            cout<<a<<endl;
        }
    };

main(){
 D d;
 d.display();
 d.greet();

 return 0;
 }