#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("chara.txt","w");
  if(fp==NULL){
    printf("not there");
    exit(0);
  }
  while((ch=getchar())!=EOF){
    putc(ch,fp);
  }
  fclose(fp);
    return 0;
}

  
  
   
 