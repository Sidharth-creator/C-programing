#include<stdio.h>
int main(){
  char value;
  printf("\nenter a character in capital letter:");
  value=getchar();
  value=value+32;
  printf("lower case: %c\n",value);
  
  return 0;
}
