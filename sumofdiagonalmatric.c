#include<stdio.h>
int main(){
    int row,column,sum;
    printf("enter the number of rows");
    scanf("%d",&row);
    printf("enter the number of columns");
    scanf("%d",&column);
    printf("enter the elements");
    int matrix[row][column];
    for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
                scanf("%d",&matrix[i][j]);
          }
          
    }
    for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
              printf("%d\t",matrix[i][j]);
              if i==j{
               sum=sum+matrix[i][j];
          }
          printf("\n");
          
    }
    printf("%dsum of diagonal elements",sum);
    return 0;
}
