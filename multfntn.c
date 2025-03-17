#include<stdio.h>
void multiply(int num1,int num2);
int main()
{
int num1,num2;
printf("Enter the first number");
scanf("%d",&num1);
printf("Enter the second number");
scanf("%d",&num2);
multiply(num1,num2);
return 0;
}
void multiply(int num1,int num2){
int product=num1*num2;
printf("%d",product);
}
