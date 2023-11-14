#include<stdio.h>
int main(){
    char a[100];
    char b[100];
    char *p,*q;
  
    p=a;
    q=b;
   
    printf("enter a=");
    gets(a);
    while(*p!='\0'){
        p++;
    } 
    
    p--; 
    while(q<p){
     
       *q=*p;
      
        q++;
        p--;
        
    }
    *q='\0';
    
    printf("copied string=");
    q=b;
     while(*q !='\0'){
        printf("%c",*q);
        q++;
    }
 
   return 0;
}