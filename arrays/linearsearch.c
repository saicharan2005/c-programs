#include<stdio.h>
int main(){
    int  n,i,f=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int val;
    printf("enter val:");
    scanf("%d",&val);
     for(i=0;i<n;i++){
      if(val==arr[i]){
          f=1;
          printf(" value is present in array at position=%d",i);
          break;
      }
    }
     if(f==0){
       printf(" value is  not present in array ");
     }
   return 0;
}