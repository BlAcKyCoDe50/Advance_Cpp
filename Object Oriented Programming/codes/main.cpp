   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

class A
{
    extern int a = 10;
    public:
    void display()
    {
        cout<<a;
    }
}
 

main(){
    
    A obj;
    obj.display();
 
 return 0;
 }