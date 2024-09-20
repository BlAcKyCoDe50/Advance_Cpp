   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
main(){
 
 int n;
 cin>>n;

 if(n%400==0) cout<<"Leap Year";
 
 else if(n%100==0) cout<<"Not a Leap Year";

 else if(n%4==0) cout<<"Leap Year";
 else cout<<"Not a Leap Year";
 
 return 0;
 }  