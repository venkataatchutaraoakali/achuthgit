#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\n",++*p);
    p=&a[1];
    printf("%d\n",*(p+2));
}