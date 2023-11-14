#include<stdio.h>
int main(){
   int x;
   int *a;
   a=&x;

  
   printf("enter x=");
   scanf("%d",a);
   while(*a !=0){
     if(*a>0){
        printf("%d is positive\n",*a);
    }
    else  if(*a<0){
        printf("%d is negative\n",*a);
    }

    printf("enter x=");
   scanf("%d",a);
   }
   
  
    return 0;
  
}