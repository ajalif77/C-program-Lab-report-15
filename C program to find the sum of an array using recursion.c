#include<stdio.h>
int sumof(int arr[],int s,int len)
{
    if(s>=len)
        return 0;
    else
    return arr[s]+sumof(arr,s+1,len);
}
int main()
{
    int ch[100];
    int n,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ch[i]);
    }
    sum=sumof(ch,0,i);
    printf("%d",sum);
    return 0;
}
