// 1/1!+1/2!+............1/n!
#include<stdio.h>

int fact(int m){
   int i,f=1;
   for(i=m;i>0;i--){
    f=f*(i);
   }
  return f;

 }
 
 int main(){
    
    int n,i;
    float r;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        r+=1.0/fact(i);
    }
    printf(" 1/1!+2/2!....n/n!=%.2f",r);

 
   return 0;
   
 }
