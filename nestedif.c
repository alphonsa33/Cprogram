#include<stdio.h>
int main(){
int num1,num2,num3;
printf("\nEnter the first number:");
scanf("%d",&num1);
printf("\nEnter the second number:");
scanf("%d",&num2);
printf("\nEnter the third number:");
scanf("%d",&num3);
if(num1>num2)
{
  if (num1>num3)
  {
  printf("First number is larger");
  }
}
else if(num2>num1)
{
  if(num2>num3)
  {
  printf("second number is larger");
  }
}
else
  {
  printf("Third number is larger");
  }
return 0;
}


