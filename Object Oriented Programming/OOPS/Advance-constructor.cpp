   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    class A
    {
        int baseA;
        public:
            A(int a)
            {
                baseA = a;
                cout<<"A class constructor called"<<endl;
            }
            void printData()
            {
                cout<<"The value of baseA: "<<baseA<<endl;
            }
    };

    class B
    {
        int baseB;
        public:
            B(int b)
            {
                baseB = b;
                cout<<"B class constructor called"<<endl;
            }
            void printdata()
            {
                cout<<"The value of baseB: "<<baseB<<endl;
            }
    };

    class Derived : public A , public B
    {
        int Derived1;
        int Derived2;
        public:
        Derived(int a , int b , int c , int d) : B(b) , A(a)
        {
            Derived1 = c;
            Derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printdata()
        {
            cout<<"Derived1: "<<Derived1<<endl;
            cout<<"Derived2: "<<Derived2<<endl;
        }
    };


main(){
 class Derived d(1,2,3,4);

 d.printdata();
 d.printdata();

 return 0;
 }