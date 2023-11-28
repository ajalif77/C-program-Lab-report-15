#include<stdio.h>
int main ()
{
    int a[5],i,*p;
    for ( i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original:\n");
    for ( i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    p=&a[5-1];
    printf("\nReverse:\n");
    for (i=0;i<5;i++)
    {
        printf("%d\t",*p--);
    }
    return 0;
}
