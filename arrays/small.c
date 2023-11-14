#include<stdio.h>
int main(){
    int n,s;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++){
       if(a[i]<s){
        s=a[i];
       }
    }
    printf("large=%d",s);


}