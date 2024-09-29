   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;


    class A
    {
        int i ,j;
        public:
        // A(int a , int b) : i(a) , j(b)
        // {
        //     cout<<"Constructor called of class A"<<endl;
        //     cout<<"i: "<<i<<" "<<"j: "<<j<<endl;
        // }
        A(int a , int b) : i(a) , j(a+5)
        {
            cout<<"Constructor called of class A"<<endl;
            cout<<"i: "<<i<<" "<<"j: "<<j<<endl;
        }
        
    };

main(){
 A a(10,15);

 return 0;
 }