#include <stdio.h>
#define add(x, y) (x + y)
#define sub(x, y) (x - y)
#define mul(x, y) (x * y)
#define div(x, y) (y != 0 ? ((float)x / (float)y) : 0)
int main()
{
    int num1, num2;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("(%d, %d) = %d\n", num1, num2, add(num1, num2));
    printf("(%d, %d) = %d\n", num1, num2, sub(num1, num2));
    printf("(%d, %d) = %d\n", num1, num2, mul(num1, num2));
    printf("(%d, %d) = %d\n", num1, num2, div(num1, num2));

    return 0;
}
