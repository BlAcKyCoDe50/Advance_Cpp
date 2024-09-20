#include<stdio.h>
int main()
{
    int array[10], i, num;
    int p =0;
    for(i=0; i<10; i++)
        scanf("%d", &array[i]);
    scanf("%d", &num);
    for(i=0; i<10; i++)
    {
        if(array[i]==num)
        {
            p=i+1;
            break;
        }
    }
    if (p>0) { 
        printf("%d", p);
    } else {
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}