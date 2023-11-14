#include<stdio.h>
#include<string.h>
int main(){
    char a[10];
    fflush(stdin);
    int l=0;
    gets(a);
    l=strlen(a);
    printf("len of string=%d",l);
}
