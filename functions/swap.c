#include<stdio.h>

int swap(int m, int n){
     int t;
     t=m;
     m=n;
     n=t;
  printf("a=%d\nb=%d",m,n);
  return 0;

 }
 
 int main(){
    
    int x,y;
    printf("a=");
    scanf("%d",&x);
    printf("b=");
    scanf("%d",&y);
    swap(x,y);

 
   return 0;
   
 }