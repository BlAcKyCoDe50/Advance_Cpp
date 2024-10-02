   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

class Example 
{
    const int var1;
    int &refvar2;
    public:

    Example() : var1(0) , refvar2(refvar2)
    {
        cout<<"Example constructor  called"<<endl;
        cout<<"Value of var1 is: "<<var1<<endl;
        cout<<"Value of refvar2 is: "<<refvar2<<endl;
    }
    Example(int var1 , int& refvar2) : var1(var1) , refvar2(refvar2)
    {
        cout<<"Example constructor  called"<<endl;
        cout<<"Value of var1 is: "<<var1<<endl;
        cout<<"Value of refvar2 is: "<<refvar2<<endl;
    }
};

main(){
    int a = 10;
    Example e1(10,a);
 

 return 0;
 }