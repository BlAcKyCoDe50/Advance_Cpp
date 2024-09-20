   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

   class Base{
      public:
      int a =9;
      virtual void  display()
      {
         cout<<"hello from Base"<<endl;
      }
      void show()
      {
         cout<<a<<endl;
      }
   };

   class child :  public Base
   {
      public:
    void display()
     {
      cout<<"hello from child"<<endl;
     }
   };


main(){
 

   Base b;
   b.display();


 return 0;
 }