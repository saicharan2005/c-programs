#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter position=");
    scanf("%d",&p);
     
    for(i=p;i<n;i++){
        a[i]=a[i+1];
      
       }
       n--; 

     for(i=0;i<n;i++){
        printf("%d",a[i]);
    }



}