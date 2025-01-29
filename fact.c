#include <stdio.h>
int main(){
  int num,fact=1,i=1;
  printf("\nEnter the number");
  scanf("%d",&num);
  while(i<=num){
  fact=fact*i;
  i++;
  }
  printf("fact=%d",fact);
  
  
  return 0;
  }
