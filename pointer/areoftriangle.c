#include<stdio.h>
int area(int *b,int *h);
int main(){
  
   int x,y;
   int *b,*h;
   b=&x;
   h=&y;
   printf("enter base and height");
   scanf("%d%d",b,h);
   area(b,h);
   return 0;
}
int area(int *b,int *h){
    float a;
    a= (0.5)*(*b)*(*h);
    printf("area of triangle=%.2f",a);
    return 0;
}