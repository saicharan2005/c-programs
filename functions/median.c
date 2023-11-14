#include<stdio.h>

int median(int x, int n[20]){
    int y;
    int r;
    if(x%2!=0){
       y=x/2;
       printf("median=%d",n[y]);
    }
    else {
       y=x/2;
       printf("median=%.2f",(n[y]+n[y-1])/(float)2);
    }
    
     return 0;
 }
 
 int main(){
    
    int x,i;
    scanf("%d",&x);
    int a[x];
  for(i=0;i<x;i++){
   scanf("%d",&a[i]);
}
   median(x,a);
 }