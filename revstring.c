/*
Author:Alphonsa
Date:19-02-25
To reverse a string
*/
#include<stdio.h>
int main(){
char str[100];
int length;
printf("Enter a string");
scanf("%s",str);
for(length=0;str[length]!='\0';length++);
int i=length-1;
for(int j=0;j<length/2;j++){
int temp;
temp=str[i];
str[i]=str[j];
str[j]=temp;
i--;
}
printf("The reversed string is:");
puts(str);
return 0;
}
