#include<stdio.h>
int main(){
    int m, n,i,j;
    printf("enter  m and n:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("enter array elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          scanf("%d",&arr[i][j]);  
        }
        
    } 
    printf("matrix\n");
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          printf("%d ",arr[i][j]);  
        }
        printf("\n");
    }
     
   return 0;
}