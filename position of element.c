#include<stdio.h>
int main(){
    int num1,i,lim,num[i];
    printf("enter the limit");
    scanf("%d",&lim);
    for (i=0;i<lim;i++){
         printf("enter the element");
         scanf("%d",&num[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&num1);
    for(i=0;i<lim;i++){
        if (num1==num[i]){
            printf("the number %d is in position %d",num1,i+1);
            break;
        }
        else{
            printf("the entered number not found");
        }
    }
    return 0;
}
    
    
    
        
         
