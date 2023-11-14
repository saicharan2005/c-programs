#include<stdio.h>

int main(){ 
     float r;
     double a,c;
     printf("enter r");
     scanf("%f",&r);
      a=3.14*r*r;
      c=2*3.14*r;
      printf("area of circle =%.2f \n circumference=%.2f",a,c);
      return 0;
}