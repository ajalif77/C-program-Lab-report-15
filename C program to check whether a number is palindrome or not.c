#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    if(temp==sum){
        printf("Number is Palindrome");
    }else{
        printf("Number is not Palindrome");
    }
    return 0;
}
