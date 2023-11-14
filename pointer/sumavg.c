#include<stdio.h>
int main(){
   int x,y,sum=0,r;
   float avg=0;
   int *a,*b,*psum,*pr;
   float *pavg;
   a=&x;
   b=&y;
   psum=&sum;
   pavg=&avg;
   pr=&r;
   printf("enter x,y");
   scanf("%d%d",a,b);
   *pr=(*b-*a)+1;
    while(*a<=*b){
       *psum+=*a;
       *a=*a+1;
    }
    *pavg= (float)(*psum)/(*pr);
    printf("sum=%d",*psum);
    printf("avg=%.2f",*pavg);
   
    return 0;
  
}