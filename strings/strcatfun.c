#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    char c[20]="";
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    printf("enter b=");
    gets(b);
    strcat(c,a);
    strcat(c,b);
    puts(c);

}