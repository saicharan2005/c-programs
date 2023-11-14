#include<stdio.h>
#include<math.h>

 
 int main(){
    
    int y;
    float x;
    int *r ;
    float *a;
    a=&x;
    r=&y;
   
    printf("enter radius");
    scanf("%d",r);
    *a= 3.14*(*r)*(*r);
    
printf("area of circle=%.2f",*a);
   return 0;
   
 }

