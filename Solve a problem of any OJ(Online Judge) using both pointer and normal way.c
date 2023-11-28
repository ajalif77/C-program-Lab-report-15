#include <stdio.h>
int main()
{
   int a, b, *ptr, *qtr, sum;

   scanf("%d%d", &a,&b);
   ptr = &a;
   qtr = &b;
   sum = *ptr + *qtr;
   printf("%d",sum);

   return 0;
}

