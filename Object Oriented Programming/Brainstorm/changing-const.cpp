   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
main(){
 
 const int a = 10;
 int *ptr = (int*)&a;
 *ptr = 20;

//not a good practice to change the value of a constant variable
 return 0;
 }