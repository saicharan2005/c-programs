#include<stdio.h>
int main(){
    int n,l,l1;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=a[0];
    l1=a[1];
    for(i=0;i<n;i++){
       if(l<a[i]){
         l1=l;
         l=a[i];
       } 
       else if(l1<a[i]){
           l1=a[i];
       }
    }
    printf("large=%d\n",l);
    printf("2nd large=%d",l1);


}