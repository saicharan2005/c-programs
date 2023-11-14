#include<stdio.h>
#include<math.h>

 
 int main(){
    
    char ch;
    char *r;
    r=&ch;
    int l=0;
    int u=0;
  
    while(*r !='*'){  
   printf("enter     charater");
   scanf("%c",r);
    if(*r>='a' && *r<='z'){
       
        printf("%c\n",*r-32);
        l++;
    }
      else if(*r >='A' && *r <='Z'){
       
        printf("%c\n",*r+32);
         u++;
    }

    }
    printf("the no of low characters=%d\n",l);
    printf("the no of up characters=%d\n",u);
    return 0;

 }   