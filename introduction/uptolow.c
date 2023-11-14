#include <stdio.h>
int main(){
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    printf("the ascii value of %c is %c",ch,ch+32);

    return 0;
}