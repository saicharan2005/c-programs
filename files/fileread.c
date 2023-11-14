#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("student.txt","r");
  if(fp==NULL){
    printf("not there");
    exit(0);
  }
  while((ch=getc(fp))!=EOF){
     putchar(ch);
  }
   fclose(fp);
    return 0;
}
 
