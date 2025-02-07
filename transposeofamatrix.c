#include<stdio.h>
int main(){
    int row,column;
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
    printf("matrix is \n");
    for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
              printf("%d\t",matrix[i][j]);
          }
          printf("\n");
          
    }
    int matrix2[row][column];
     for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
             if (i != j){
                matrix2[i][j]=matrix[j][i];
             } 
             else{
                matrix2[i][j]=matrix[i][j];
            }
          }
          printf("\n");
          
    }
    printf("transpose of matrix is \n");
     for(int i=0;i<row;i++){
          for(int j=0;j<column;j++){
              printf("%d\t",matrix2[i][j]);
          }
          printf("\n");
          
    }
    
    return 0;
}
