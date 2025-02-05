#include<stdio.h>
int main(){
   int lim,i,num[i],largest=num[0],smallest=num[0];
   printf("enter the limit");
   scanf("%d",&lim);
   for(i=0;i<lim;i++){
       printf("enter the elements");
       scanf("%d",&num[i]);
  }
  for(i=0;i<lim;i++){
     if (num[i]>largest){
         largest=num[i];
     }
     else if (num[i]<smallest){
          smallest=num[i];
     }
  }
  printf("the largest number is %d\n",largest);
  printf("the smallest number is %d\n ",smallest);
  return 0;
}
       
       
