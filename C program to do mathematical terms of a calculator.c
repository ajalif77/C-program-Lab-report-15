#include<stdio.h>
int main(){
    float a,b;
    char ch;
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&ch);
    if(ch=='+'){
        printf("You Select '+'\n");
    }
    if(ch=='-'){
        printf("You Select '-'\n");
    }
    if(ch=='*'){
        printf("You Select '*'\n");
    }
    if(ch=='/'){
        printf("You Select '/'\n");
    }
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter Second Number: ");
    scanf("%f",&b);
switch(ch)
{
    case'+':
    printf("%.2f + %.2f = %.2f",a,b,a+b);
    break;
    case'-':
    printf("%.2f - %.2f = %.2f",a,b,a-b);
    break;
    case'*':
    printf("%.2f * %.2f = %.2f",a,b,a*b);
    break;
    case'/':
        if(b==0){
            printf("Divison cannot be zero.Retry!!!\n");
            printf("Enter Second Number again: ");
            scanf("%f",&b);
        }
    printf("%.2f / %.2f = %.2f",a,b,a/b);
    break;
    default:
        printf("Error");
}




return 0;
}
