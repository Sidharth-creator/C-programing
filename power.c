#include<stdio.h>
int power(int n,int p){
     if(p==0){
         return 1;
     }
     else{
        return  n*power(n,p-1);
     }
}
int main(){
    int n,p;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the exponant");
    scanf("%d",&p);
    printf("power of number%d:%d",n,power(n,p));
    return 0;
}
