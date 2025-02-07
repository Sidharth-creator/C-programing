#include<stdio.h>
int main(){
    int row1,column1,row2,column2;
    printf("enter the number of rows of matrix1");
    scanf("%d",&row1);
    printf("enter the number of columns of matrix1 ");
    scanf("%d",&column1);
    printf("enter the elements");
    int matrix1[row1][column1];
    for(int i=0;i<row1;i++){
          for(int j=0;j<column1;j++){
                scanf("%d",&matrix1[i][j]);
          }
          
    }
    printf("enter the number of rows of matrix2");
    scanf("%d",&row2);
    printf("enter the number of columns of matrix2 ");
    scanf("%d",&column2);
    printf("enter the elements");
    int matrix2[row2][column2];
    for(int k=0;k<row2;k++){
          for(int l=0;l<column2;l++){
                scanf("%d",&matrix2[k][l]);
          }
          
    }
    printf("first matrix\n");
    
    for(int i=0;i<row1;i++){
          for(int j=0;j<column1;j++){
              printf("%d\t",matrix1[i][j]);
          }
          printf("\n");
          
    }
    printf("second matrix\n");
    for(int k=0;k<row2;k++){
          for(int l=0;l<column2;l++){
              printf("%d\t",matrix2[k][l]);
          }
          printf("\n");
    }
    int matrix3[row1][column1];
    printf("second matrix\n");
    for(int i=0;i<row2;i++){
          for(int j=0;j<column2;j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
              
          }
    }
    printf("second matrix\n");
    for(int i=0;i<row2;i++){
          for(int j=0;j<column2;j++){
              printf("%d\t",matrix3[i][j]);
          }
          printf("\n");
    }
    return 0;
}
