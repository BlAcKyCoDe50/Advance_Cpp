#include<bits/stdc++.h> 
using namespace std; 

bool balance(string expr) 
{ 
    stack<char> s; 
    char n; 
 
    for (int i=0;i<expr.length();i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            s.push(expr[i]); 
            continue; 
        } 

        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
            n = s.top(); 
            s.pop(); 
            if (n=='{' || n=='[') 
                return false; 
            break; 
  
        case '}': 
  
            n = s.top(); 
            s.pop(); 
            if (n=='(' || n=='[') 
                return false; 
            break; 
  
        case ']': 

            n = s.top(); 
            s.pop(); 
            if (n =='(' || n == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
} 

int main() 
{
  string expr;
  cout<<"";
  cin>>expr;
    if (balance(expr)) 
        cout << "Balanced";
     
    else
        cout<<"Not Balanced";
        return 0;

return 0;

}