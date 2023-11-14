#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    char *p,*q;
    p=a;
    q=b;
    
    printf("enter a=");
    gets(a); 
   
    while(*p !='\0'){ 
       *q=*p;
        p++;q++;
        
    }
    *q='\0';
   
    printf("copied string=");

     puts(q);
   return 0;
}