#include<stdio.h>
#include<math.h>

 
 int main(){
  
    float y;
    int x;
    float *r; 
    int *a ;
    a=&x;
    r=&y;
    printf("enter float num");
    scanf("%f",r);
    *a=(int)*r;
  printf("area of circle=%d",*a);
   return 0;
   
 }