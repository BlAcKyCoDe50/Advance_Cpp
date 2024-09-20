#include<iostream>
using namespace std;
main(){
      int num1,num2,operation;
      char input;
      
      cout<<"Enter the firs number :- "<<endl;
      cin>>num1;
      cout<<"Enter the Second number:- "<<endl;
      cin>>num2;
      
      cout<<"Enter the operation:- "<<endl;
      cout<<"Addition(a)..Subtraction(b)..multilicatio(c)..Division(d):- "<<endl;
      cin>>(input);

      
      switch (input)
      {
      case 'a':
              operation=num1+num2;
              cout<<operation;
        
        break;
      
      case 'b':
              operation=num1-num2;
              cout<<operation;
              break;

      case 'c':
              operation=num1*num2;
              cout<<operation;
              break;

      case 'd':
            operation=num1/num2;
            cout<<operation;
      default:
        break;
      }
      
      

      
      
      
return 0;
}