#include<stdio.h>

int fibbo(int n){

    if(n==0 ){
        return 0;
    }
    else if(n==1 ){
        return 1;
    }
    else{
        return (fibbo(n-1)+ fibbo(n-2)); 
    }
    
 }
 
 int main(){
    
    int x,r,i=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
      r=fibbo(i);
   printf("%d  ",r);  
    }
   
   return 0;
   
 }
