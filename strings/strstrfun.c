#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    char *p;
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    printf("enter b=");
    gets(b);
  
    p=strstr(a,b);
    if(p){
        printf("sring found");
    }
   
    else{
         printf("not found");
    }
   return 0;

}