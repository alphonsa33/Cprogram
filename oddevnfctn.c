#include<stdio.h>
int isEven(int num);
int main()
{
int num,result;
printf("Enter the integer");
scanf("%d",&num);
result=isEven(num);
if(result==1){
printf("even");
}
else{
printf("odd");
}
return 0;
}
int isEven(int num){
if(num%2==0){
return 1;
}
else{
return 0;
}
}

