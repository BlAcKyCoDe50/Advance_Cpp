#include<iostream>
#include <cmath>
using namespace std;


   bool isprime(int num){
for(int i=2;i<=sqrt(num);i++){

    if(num%i==0){
        return false;
    }
}
    return true;
   }




int main(){

    int a,b,num;
    cout<<"Enter the number1:- "<<endl;
    cin>>a;
    cout<<"Enter the number 2:- "<<endl;
    cin>>b;

    for(int i=a;i<=b;i++){

        if(isprime(i)){
            //cout<<"The prime numbers are:- "<<endl;
            cout<<i<<endl;
        }
    }

return 0;
}