#include<stdio.h>
int small(int *x[10],int n);
int main(){
  
    int n,i;
    printf("enter n");
   scanf("%d",&n);
   int a[n];
   int *p;
   p=a;
   for(i=0;i<n;i++){
      scanf("%d",p+i);
   }
   small(p,n);

  
   return 0;
}
int small(int *x[10],int n){
    int s,i;
    
     s=x[0];
   for(i=0;i<n;i++){
      if(x[i]<s){
        s=x[i];
      }
   }
   printf("small=%d",s);
   return 0;
}