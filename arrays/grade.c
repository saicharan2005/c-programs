#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    int g[10]={0};
    for(i=0;i<n;i++){
        printf("marks[%d]=",i);
       scanf("%d",&a[i]);
       ++g[(int) (a[i])/10];

    } 
    printf("range     no of marks\n");
   for(i=0;i<n;i++){
      printf("%d-%d     %d\n",i*10,(i+1)*10 ,g[i]);
        
       }

    }
   