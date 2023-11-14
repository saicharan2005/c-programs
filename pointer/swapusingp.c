#include<stdio.h>


 
 int main(){
    
    int x,y,t;
    int *p,*q,*r;
    p=&x;
    q=&y;
    r=&t;
    printf("enter p");
    scanf("%d",p);
    printf("enter q");
    scanf("%d",q);
    *r=*p;
    *p=*q;
    *q=*r;

   printf("p=%d",*p);
   printf("q=%d",*q);
   return 0;
   
 }