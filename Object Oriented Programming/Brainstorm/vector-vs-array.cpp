   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

class Example
{
   public:
      int x  = 0;
   Example() : x(0)
   {
      cout<<"Example constructor  called"<<endl;
      cout<<"Value of x is: "<<x<<endl;
   }

};

   class entity
   {
      Example ex1;
      string name;
      int y = 0; 
      public:
         entity() : name("Unknown")
         {
            cout<<"Entity constructor called"<<endl;
            ex1.x = 10;
            cout<<"Value of x is: "<<ex1.x<<endl;
            name = "testing";
         }

         void display()
         {
            cout<<"Name: "<<name<<endl;
            cout<<"Value of y is: "<<y<<endl;
         }
   };

main(){
//  vector<int> arr = {1,2,3,4};
//  int array[4] = {1,2,3,4};

//  cout<<&arr[0]<<" "<<&arr[1]<<endl;
//  cout<<&array[0]<<" "<<&array[1]<<" "<<&array[2]<<endl;

   entity obj1;
   obj1.display();
   
 return 0;
 }