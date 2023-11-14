#include<stdio.h>
#include<string.h>
int main(){
    char a;

    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    int r,r1;
    
    r=isalnum(a);
    
    if(r){
        printf("yes alnum");
    }
   
    else{
         printf("no alnum");
    }
    
    r1=isalpha(a);
    
    if(r1){
        printf("yes alpha");
    }
   
    else{
         printf("no");
    }
    r=isdigit(a);
    
    if(r){
        printf("yes digit ");
    }
   
    else{
         printf("no");
    }
   return 0;

}