#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter n1=");
    scanf("%d",&n1);
    int a1[n1],i,j=0;
    printf("enter array 1=");
    for(i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }
    printf("enter n2=");
    scanf("%d",&n2);
    int a2[n2];
    printf("enter array 2=  ");
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    n3=n1+n2;
    int a3[n3];
    for(i=0;i<n1;i++){
        a3[j]=a1[i];
        j++;
    }

    for(i=0;i<n2;i++){
        a3[j]=a2[i];
        j++;
    }  
      
     for(i=0;i<n3;i++){
        printf("%d ",a3[i]);
    }



}