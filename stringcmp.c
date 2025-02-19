#include<stdio.h>
#include<string.h>
int main(){
    char string1[20],string2[20];
    printf("enter the string1:");
    scanf("%s",string1);
    printf("enter the string2");
    scanf("%s",string2);
    int result=strcmp(string1,string2);
    if (result==0){
        printf("both string are equal");
    }
    else{
    printf("the strings are not equal");
    }
    return 0;
}
       
    

