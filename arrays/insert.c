#include<stdio.h>
int main(){
    int n,p,num;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter position=");
    scanf("%d",&p);
     printf("enter value=");
    scanf("%d",&num);
    for(i=n;i>=p;i--){
        a[i+1]=a[i];
   
       }  
       a[p]=num;
       n++; 
     for(i=0;i<n;i++){
        printf("%d",a[i]);
    }



}