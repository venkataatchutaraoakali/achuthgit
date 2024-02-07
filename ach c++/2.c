#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("Values after swapping in function: %d %d\n",*a,*b);
}

int main()
{
    int a=10,b=20;
    printf("Values before swapping in main: %d %d\n",a,b);
    swap(&a,&b);
    printf("Values after swapping in main: %d %d\n",a,b);
}