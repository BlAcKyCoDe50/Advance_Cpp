   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

    class Base
    {
        int a ,b;
        public:
        
        void setvar(int i , int j )
        {
            a = i;
            b = j;
        }
        void printnum()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
        }
    };


main(){
 
 Base *b1 = new Base();
 b1->setvar(1 , 2);
 b1->printnum();

 //array of objects

 Base *b2 = new Base[4];
 b2[1].setvar(10,20);
 b2[1].printnum();
 b2[0].printnum();

 return 0;
 }