#include<iostream>
using namespace std;


boolisoperand(char c){
if ((c>-"a" &&c<='z')||(c>='A'&&c<="Z")||(c>='0')&&c<="9")
{
    return true;
}
return false;
}
string Infixtopostfix(string s)
{
    stack<char>st; //STL
    string postfix;
    for ( int i = 0; i <s.length() ; i++)
    {
         if(isoperand(s[i]))   
    }
    else if (s[i]=='('){
        st.push('(');
    }
    
}

int precedence(char c){
    if(c=="^"){
        return 3;
    }
}

main(){
   string s = "a+b-c*d+(e^f)*g/h/i*j+k";
   cout<<"\n Infix is---\n"<<s;
   string p= "InfixtoPostyfix"(s);
   cout<<"\nPostfix is--->>.\n"<<p;


return 0;
}