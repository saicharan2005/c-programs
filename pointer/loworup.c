#include<stdio.h>
#include<math.h>

 
 int main(){
    
    char ch;
    char *r;
    r=&ch;
   
    printf("enter charater");
    scanf("%c",r);
    if(*r>='a' && *r<='z'){
        printf("the given character=%c is in lower case \n",*r); 
    }
    else if(*r>='A' && *r<='Z'){
        printf("the given character=%c is in upper case \n",*r); 
    }
    else if(*r>='0' && *r<='9'){
        printf("the given character=%d is in number \n",*r); 
    }
    else{
         printf("enter vaild character"); 
    }
    
   
   return 0;
   
 }