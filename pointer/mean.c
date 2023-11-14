//mean or sum and avg
#include<stdio.h>
int main(){
    int n,i,sum=0;
    float mean;
    scanf("%d",&n);
    int a[n];
    int *pa=a,*psum=&sum;
    float *pmean=&mean;
    for(i=0;i<n;i++){
        scanf("%d",a+i); //pa+i,&a[i] 
    }
     for(i=0;i<n;i++){
        *psum += pa[i] ;// *(pa+i) ,a[i]*(a+i)
    }
    *pmean=(float) *psum/n;
    printf("sum=%d\nmean=%.2f",*psum,*pmean);
}