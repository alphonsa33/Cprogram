#include<stdio.h>
int main(){
  char name[20];
  printf("\nEnter your name");
  fgets(name,sizeof(name),stdin);
  printf("Welcome %5",name);
  return 0;
  }
