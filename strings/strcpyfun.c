#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[10],c[10];
 
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
 
    strncpy(c,a,4);
    c[4]='\0';
    printf("%s",c);
    return 0;

}