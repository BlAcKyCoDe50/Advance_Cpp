#include<iostream>
using namespace std;
  void swap(int* a ,int* b){
        int temp=*a;
        int *a = *b;
        int b=temp;


  }



main(){
      int a=4,b=8;

      int*ptra=&a;
      int*ptrb=&b;

      cout<<*ptra<<endl;
      cout<<*ptrb<<endl;
      cout<<&a;

      //swap(a,b);

return 0;
}