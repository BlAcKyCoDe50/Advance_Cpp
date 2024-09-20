   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

class Employee
{
    int id;
    static int cnt;
    public:
        void setdata(void)
        {
            cout<<"Enter the id: "<<endl;
            cin>>id;
            cnt++;
        }
 
 //static member functions have only access to the static varibles .
        // static void display(void)
        // {
        //     cout<<"count is: "<<cnt<<endl;
        //     // cout<<"id: "<<id<<endl; throws an error
        // }

        void getdata(void)
        {
            cout<<"The id of the employee is "<<id<<" and this is employee number "<<cnt<<endl;
        }
};

int Employee::cnt; //static variables default value is always 0



main(){
 
 Employee e1,e2,e3,e4;
 e1.setdata();
 e1.getdata();
 e2.setdata();
 e2.getdata();
 
 //array of objects
 Employee arr[4] = { e1 , e2 , e3 , e4};
 
 return 0;
 }