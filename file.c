#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("file.c","w");
  putc("Alph",fp);
  fclose(fp);
  fp=fopen("file.c","r");
  char ch=getc(fp);
  printf("%c",ch);
  fclose(fp);
  return 0;
  }
