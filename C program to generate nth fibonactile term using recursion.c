#include<stdio.h>
int fab(x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fab(x-1)+fab(x-2);
}
int main ()
{
        int a;
        scanf("%d",&a);
        int fabo=fab(a);
        printf("%d",fabo);

        return 0;
}
