#include<stdio.h>
#include<stdlib.h>
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
    
    
    q=b;
    p=a;
     while(*p!='\0'){
     if(*q!=*p){
        printf("not palindrome");
        exit(0);
     }
       
      
        q++;
        p--;
       
    } 
    printf("palindrome");
    return 0; 
    }
 
  
