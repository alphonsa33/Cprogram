/*
Author:Alphonsa
Date:19-02-25
To reverse a string
*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
printf("Enter the first string");
scanf("%s",str1);
printf("Enter the second string");
scanf("%s",str2);
int result=strcmp(str1,str2);
if(result==0){
printf("The strings are equal");
}
else{
printf("The strings are not equal");
}
return 0;
}
