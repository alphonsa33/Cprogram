#include<stdio.h>
int arr(int array[],int size){
int sum=0;
for(int i=0;i<size;i++){
sum=sum+array[i];
}
return sum;
}
int main(){
int n;
printf("Enter the size of the array");
scanf("%d",&n);
int array[n];
printf("enter the %d elements",n);
for (int i=0;i<n;i++){
scanf("%d",&array[i]);
}
int sum=arr(array,n);
printf("%d",sum);
return 0;
}




