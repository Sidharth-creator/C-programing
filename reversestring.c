#include<stdio.h>
int main(){
    char string[20];
    int length;
    printf("enter the string");
    fgets(string,sizeof(string),stdin);
    for(length=0;string[length]!='\0';length++);
    int i=length-1;
    for(int j=0;j<length/2;j++){
           char temp=string[i];
           string[i]=string[j];
           string[j]=temp;
           i--;
    }
    printf("the reverse of string:");
    puts(string);
    return 0;
}
             
