#include<stdio.h>
int n;
int pal(int x)
{
    static int sum=0;
    if(x!=0){
        sum=sum*10+x%10;
        pal(x/10);}
        else if(sum==n)
            return 1;
        else
            return 0;
}
int main ()
{
    int palindrome;
    scanf("%d",&n);
    palindrome=pal(n);
    if(palindrome==1)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is Not Palindrome");
    }
    return 0;
}
