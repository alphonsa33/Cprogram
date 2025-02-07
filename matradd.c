/*
author:Alphonsa
to calculate matrix addition
*/
#include<stdio.h>
int main(){
  int row,column;
  printf("Enter the row and column values:");
  scanf("%d%d",&row,&column);
  int m1[row][column],m2[row][column],m3[row][column];
  printf("\n Enter the first matrix:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    scanf("%d",&m1[i][j]);
}}
  printf("\n Enter the second matrix:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    scanf("%d",&m2[i][j]);
}}
  
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    m3[i][j]=m1[i][j]+m2[i][j];
    
}}
 for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    printf("%d\t",m3[i][j]);
}
printf("\n");
}
 return 0;
 }
 
