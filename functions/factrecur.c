#include<stdio.h>
int fact(int x){

  if(x==0){
    return 1;
  }
  else{
    return x*fact(x-1);
  }
}  
 int main(){
    
    int x,r;
    scanf("%d",&x);
    
   r=fact(x);
   printf("%d",r);
   return 0;
   
 }