#include <stdio.h>
#include<conio.h>
int main() {
    
    int i=0;
    char s[20];
    fflush(stdin);
    printf("enter name=");
    scanf("%c",&s[i]);
    while( s[i]!= '*'){
       i++; 
       scanf("%c",&s[i]);
    }
    s[i]='\0';
    puts(s);

}