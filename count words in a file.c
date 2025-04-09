#include
int main(){
FILE *fp;
int wordCount=0;
int lineCount=0;
int charCount=0;
fp = fopen("filenew.txt", "r");
char ch;
while (fscanf(fp, "%c", &ch) ==1){
charCount++;
if (ch == ' ' || ch == '.'){
wordCount++;
}
if (ch == '\n'){
lineCount++;
}
}
printf("Word Count=%d", wordCount);
printf("Line Count=%d", lineCount);
printf("Character Count=%d", charCount);
fclose(fp);
return 0;
}

