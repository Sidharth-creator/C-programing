#include<stdio.h>
void readfile(FILE *fp){
    int num;
    while(fscanf(fp,"%d",&num)==1){
           printf("%d",num);
    }
    fclose(fp);
}
int main(){
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("number.txt","r");
    fp2=fopen("odd.txt","w");
    fp3=fopen("even.txt","w");
    int num;
    while(fscanf(fp1,"%d",&num)==1){
        if(num%2==0){
          fprintf(fp3,"%d",num);
        }
        else{
           fprintf(fp2,"%d",num);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\nthe input text file:");
    fp1=fopen("number.txt","r");
    readfile(fp1);
    printf("\nthe odd number file content:");
    fp2=fopen("odd.txt","r");
    readfile(fp2);
    printf("\nthe even number file content:");
    fp3=fopen("even.txt","r");
    readfile(fp3);
  
    return 0;
}
