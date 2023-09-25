// #include<iostream>
// using namespace std;
// main(){
//         int a=10;
//         char char_1='B';
//         // int *apointer; //declaring the pointer
//         char *char_1ptr;
//         // apointer=&a; // assinging the value to the pointer
//         char_1ptr=&char_1;
//         cout<<"The address of the Character variable is:- "<<char_1ptr<<endl;



        
// //         cout<<*apointer<<endl; //it prints the value of a.
// //         *apointer =20; //updating the value of apointer
// //         cout<<"The new value is" << " "<< *apointer<<endl;
// //         cout<<"The old Address is "<<" "<<apointer<<endl;
// //         apointer++; // updating the address of pointer.
// //         cout<<"The new Address is "<<" "<<apointer<<endl;

// //         int **pointertopointer;
// //        cout<<"New code is:- "<<endl;
// //         pointertopointer=&apointer;
// //         cout<<*pointertopointer;  //Pointer to pointer means storing address of previous pointer to new pointer.


// return 0;
// }


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    *a=*a+*b;
    *b=*a-*b;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}