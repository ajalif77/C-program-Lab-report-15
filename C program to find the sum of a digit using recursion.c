#include<stdio.h>
int sum(int x)
{
    if(x==0)
    return 0;
    else
    return (x%10+sum(x/10));

}
int main ()
{
    int a,i;
    scanf("%d",&a);
    printf("%d",sum(a));

}
