#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    int d=0;
     for(i=n-1;i>=0;i--){
       d=d*10+a[i];
    }
    printf("%d",d);

}