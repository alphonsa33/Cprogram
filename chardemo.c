#include<stdio.h>
int main(){
  char value;
  printf("\nEnter a character in capital letters");
  value=getchar();
  value=value+32;
  
  printf("Lower case letter:%c",value);
  return 0;
  }
