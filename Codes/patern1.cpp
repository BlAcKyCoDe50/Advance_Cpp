#include<iostream>
using namespace std;
main(){
    int rows,column;

    cout<<"Enter the number of rows:- "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns:- "<<endl;
    cin>>column;

    for (int i = 0; i < rows; i++)
    {
        for (int c = 0; c<=column;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
return 0;
}