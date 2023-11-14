// 1/1!+4/2!+............n*n/n!
#include<stdio.h>
#include<math.h>

int fact(int m){
   int i,f=1;
   for(i=m;i>0;i--){
    f=f*(i);
   }
  return f;

 }
 
 int main(){
    
    int n,i,num;
    float r,den;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=pow(i,i);
        den=fact(i);
        r+=num/den;
    }
    printf(" 1/1!+4/2!....n*n/n!=%.2f",r);

 
   return 0;
   
 }