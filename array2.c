#include<stdio.h>
int main()
{
 int i,limit,maxposition,minposition,min,max;
 printf("Enter the limit");
 scanf("%d",&limit);
 int num[limit];
 printf("Enter the elements:");
 for(i=0;i<limit;i++){
  scanf("%d",&num[i]);
}
 min=num[0];
 max=num[0];
 for(i=0;i<limit;i++){
  if(num[i]<min){
   min=num[i];
   minposition=i+1;
}
 if(num[i]>max){
 max=num[i];
 maxposition=i+1;
}
}
 printf("\n%d is the smallest",min);
 printf("\n%d is the largest",max);
 printf("\nminimum at the position:%d",minposition);
 printf("\nmaximum at the position:%d",maxposition);
return 0;
}
