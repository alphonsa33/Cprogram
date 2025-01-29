#include <stdio.h>
int main()
{
    int num1,num2,num3;
    char operator;
    printf("\n,Enter the first number:");
    scanf("%d",&num1);
    printf("\n,Enter the second number:");
    scanf("%d",&num2);
    printf("\n,Enter the operator:");
    scanf("%c",%operator);
    switch(operator)
    {
    case'+':
        printf("%d+%d=%d",num1,num2,num1+num2);
        break;
    case'-':
        printf("%d-%d=%d",num1,num2,num1-num2);
        break;
    case'*':
        printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case'/':
        printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    case'%':
        printf("%d %% %d=%d",num1,num2,num1%num2);
        break;
        default:
        printf("Invalid operator");
        break;
        return 0;
    }
}


