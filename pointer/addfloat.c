#include<stdio.h>
int main(){
   float x,y,z;
   float *a,*b,*c;
   a=&x;
   b=&y;
   c=&z;
   printf("enter x,y");
   scanf("%f%f",a,b);
   
    *c=*a+*b;
    printf("%.2f",*c);
    return 0;
  
}