#include<stdio.h>
int main(){
    int i,num,lim,sec,j;
    printf("enter the no of element");
    scanf("%d",&lim);
    int elem[lim];
    for(i=0;i<lim;i++){
        printf("enter the element");
        scanf("%d",&elem[i]);
    }
    for(i=0;i<lim;i++){
        for(j=0;j<lim-1;j++){
            if (elem[j]>elem[j+1]){
                sec=elem[j];
                elem[j]=elem[j+1];
                elem[j+1]=sec;
              
            }
        }
    }
    for(i=0;i<lim;i++){
      printf("%d",elem[i]);
    }
    return 0;
}
            
        
