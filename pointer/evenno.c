#include<stdio.h>
int main(){
   int x,y;
   
   int *a,*b;
  
   a=&x;
   b=&y;
 
   printf("enter x,y");
   scanf("%d%d",a,b);

    while(*a<=*b){
        if(*a%2==0){
          printf("even=%d\n",*a);    
        }
        else{
           printf("odd=%d\n",*a);  
        }
     
       *a=*a+1;
    }
  
    
   
   
    return 0;
  
}