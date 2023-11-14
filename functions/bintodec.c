#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int binary(n);
 int main(){
    
    int x,r;
    scanf("%d",&x);
    binary(x);
   
   
 }
 int binary(n){
    
    int d,b=1,s=0,t;
    t=n;
    while(n!=0){
        d=n%10;
        s=s+d*b;
        b=b*2;
        n=n/10;
    }
    printf("decimal=%d to binary=%d",t,s);

 }