#include<stdio.h>

int fact(int m){
   int i,f=1;
   for(i=m;i>0;i--){
    f=f*(i);
   }
  return f;

 }
 
 int main(){
    
    int n,r;
    float npr,ncr;
    printf("n=");
    scanf("%d",&n);
    printf("r=");
    scanf("%d",&r);
    npr= (float)fact(n)/fact(n-r);
    printf("npr=%.2f\n",npr);
    ncr= (float)fact(n)/(fact(n-r)*fact(r));
    printf("ncr=%.2f",ncr);

 
   return 0;
   
 }