#include <stdio.h>
#include<conio.h>
int main() {
    
    int i=0,c=1,n=0;
    char s[20];
    fflush(stdin);
    printf("enter name=");
    gets(s);
    while( s[i]!='\0'){

    if( s[i]==' ' && (s[i+1]>='a' && s[i+1]<='z')){
    c++;

    }
    if( s[i]=='\n' ){
    n++;}

       i++;
    }
    printf("no od words=%d",c);
    return 0;

}