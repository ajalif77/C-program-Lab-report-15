#include<stdio.h>
int lcm(int a,int b)
{
    static int sum=0;
    sum=sum+b;
    if(sum%a==0 && sum%b==0)
        return sum;
    else
        return lcm(a,b);
}
int main ()
{
    int x,y;
    int LCM;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        LCM=lcm(y,x);
    }else
    {
        LCM=lcm(x,y);
    }
    printf("%d %d = %d",x,y,LCM);
    return 0;
}
