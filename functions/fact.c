#include<stdio.h>

int fact(int m){
   int i,f=1;
   for(i=m;i>0;i--){
    f=f*(i);
   }
  printf("fact=%d",f);
  return 0;

 }
 
 int main(){
    
    int x;
    printf("x=");
    scanf("%d",&x);
    fact(x);

 
   return 0;
   
 }