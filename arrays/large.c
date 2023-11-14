#include<stdio.h>
int main(){
    int n,l;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++){
       if(a[i]>l){
        l=a[i];
       }
    }
    printf("large=%d",l);


}