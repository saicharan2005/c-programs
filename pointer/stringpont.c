#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    char *p;
    p=a;
    fflush(stdin);
    gets(p);
    
     while(*p!='\0'){
        printf("%c",*p);
        p++;
    }
}