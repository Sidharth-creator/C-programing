#include<stdio.h>
int main(){
   int array;
   int n;
   printf("enter the no of elements;");
   scanf("%d",&n);
   array=(iny *) malloc(n* sizeof(int));
   printf("enter the element");
   for(int i=0;i<n;i++){
     scanf("%d",array+i);
  }
  for(int i=0;i<n;i++){
    printf("%d",*(array+i));
  }
  return 0;
