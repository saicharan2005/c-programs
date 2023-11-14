#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b;
    char *p;
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    printf("enter char b=");
    scanf("%c",&b);
  
    p=strchr(a,b);
    if(p){
        printf("char found");
    }
   
    else{
         printf("not found");
    }
   return 0;

}