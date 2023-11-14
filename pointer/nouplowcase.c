#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int l=0;
    int u=0;
    char *p;
    fflush(stdin);
    gets(a);
    p=a;
    while(*p!='\0'){
    if(*p>='a' && *p<='z'){
        l++;
    }
     else if(*p>='A' && *p<='Z'){
        u++;
    }
    p++;
    }
    printf("lower case no=%d\nupper case no=%d",l,u);
    return 0;
}