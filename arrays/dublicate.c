#include<stdio.h>
int main(){
    int n,i,j,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
       if(a[i]==a[j] && i!=j){
        f=1;
        printf("duplicate=%d",a[i]);
        break;
        
       }

    }
   }
    if(f==0){
        printf("not duplicate");
    }
        
   

}