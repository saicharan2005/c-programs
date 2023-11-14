#include<stdio.h>
#include<math.h>

 
 int main(){
    
    char ch;
    char *r;
    r=&ch;
   
    printf("enter charater");
    scanf("%c",r);
    printf("ascii value of given character=%d\n",*r);
    printf("uppercase of given characters=%c",*r-32);
   return 0;
   
 }