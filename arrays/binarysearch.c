#include<stdio.h>

int main(){
    int  n,i,f=0,beg,end,mid;
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
    beg=0,end=n;
      while(beg<=end){
        mid=(beg+end)/2;
        if(val==arr[mid]){
          f=1;
         printf(" value is present in array at position=%d",mid);
          break;
        }
        else if(val<arr[mid]){
          end=mid-1;
        }
        else {
          beg=mid+1;
         }
      }
   if(f==0 ){
    printf("not found");
   }
   return 0;
}