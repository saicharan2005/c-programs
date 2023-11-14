#include<stdio.h>

int main(){
  
    int n,l,i;
    printf("enter n");
   scanf("%d",&n);
   int a[n];
   int *p,*pl;
   p=a;
   pl=&l;
   for(i=0;i<n;i++){
      scanf("%d",p+i);
   }
   *pl=p[0];
   for(i=0;i<n;i++){
      if(p[i]>*pl){
        *pl=p[i];
      }
   }
   printf("large=%d",*pl);
   
  
   return 0;
}
