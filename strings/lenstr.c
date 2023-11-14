#include <stdio.h>
#include<conio.h>
int main() {
    
    int i=0;
    char s[20];
    fflush(stdin);
    printf("enter name=");
    gets(s);
    while( s[i]!= '\0'){
       i++;
    }
    printf("len of str=%d",i);

}


