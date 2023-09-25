#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

struct node 

{

    int data;

    node *next;

};

struct node *frnt = NULL;

struct node *back = NULL;

int inserting(int p)

{

    if (back ==NULL && frnt== NULL)

    {  

        node *newnode;

        newnode = new node;

        newnode->data=p;

        back = newnode;

        frnt = newnode;

        newnode->next=NULL;

    }

    else

    {

            node *newnode;

            newnode = new node;

            newnode->data=p;

            back->next=newnode;

            newnode->next=NULL;

            back=newnode;

    }

    return 0;

}

void print()

{

    node *ptr = frnt;

    while(frnt!=back)

    {

        cout<< frnt->data<<endl;

        ptr=frnt;

        frnt=frnt->next;

        delete(ptr);

    }

    cout<<frnt->data;

    delete(frnt);

}

int main() 

{

    int n;

    cin >>n;

    if(n<=2||n>10)

    {

        cout << "Invalid ";

        exit(0);

    }

    int count = 0,p=-10;

    while(n!=count)

    {

        int x;

        x=p;

        cin >> p;

        if(p>x)

        {

            inserting(p);

            count++;

        }

    }

    print();

}