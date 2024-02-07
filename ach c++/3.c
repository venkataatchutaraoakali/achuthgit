#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated");
        return 0;
    }
    printf("Memory is allocated successfully\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}