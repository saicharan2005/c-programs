#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    int p;
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    printf("enter b=");
    gets(b);
  
    p=strspn(a,b);
    
         printf("not found at=%d",p);
   return 0;

}