/*
author:Alphonsa
to calculate matrix transpose
*/
#include<stdio.h>
int main(){
  int row,column;
  printf("Enter the row and column values:");
  scanf("%d%d",&row,&column);
  int m1[row][column];
  printf("\n Enter the first matrix:\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
    scanf("%d",&m1[i][j]);
}}
for(int i=0;i<column;i++){
    for(int j=0;j<row;j++){
    printf("%d\t",m1[j][i]);
}
  printf("\n");
  }
  return 0;
  }
