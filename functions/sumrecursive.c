#include<stdio.h>

 int sumr(n);
 int main(){
    
    int x,r;
    scanf("%d",&x);
    
   r=sumr(x);
   printf("%d",r);
   return 0;
   
 }
 int sumr(n){

    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
    
    
     return 0;
 }