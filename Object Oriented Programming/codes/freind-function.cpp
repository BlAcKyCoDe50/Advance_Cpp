#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//forward declaration
class CEO;

class Employee
{
    string name = "emp1";
    int empid = 1;
    const int test = 0;
    // friend class CEO;
    //freind function inside another class
    public:
    friend void CEO::fetch(const Employee&e);
    Employee (int test1) : test(test1) {}

   void display()
    {
        cout << "Name: " << " " << name << endl;
        cout << "empid: " << " " << empid;
    }
};

// void CEO(Employee e)
// {
//     cout << "Name: " << " " << e.name << endl;
//     cout << "empid: " << " " << e.empid<<endl;
//     cout << "testing const: " << " " << e.test;
    
// }    

    
//freind class
class CEO
{
    public:
       void fetch(const Employee&e)
        {
            cout<<"id: "<<e.empid<<endl;
            cout<<"name: "<<e.name;
            cout<<"test: "<<e.test;
        }       
};

main()
{
    Employee e(5);
    CEO e1;
    e1.fetch(e);
    return 2;
}