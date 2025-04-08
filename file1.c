#include<stdio.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("file.c","w");
  while((ch=getc(stdin))!='z'){
  putc(ch,fp);
  }
  fclose(fp);
  fp=fopen("file.c","r");
  while((ch=getc(fp))!=EOF){
  printf("%c",ch);
  }
  fclose(fp);
  return 0;
  }
