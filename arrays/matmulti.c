#include<stdio.h>
int main(){
    int m, n,i,j,k;
    printf("enter  m and n:");
    scanf("%d%d",&m,&n);
    int arr1[m][n];
    //reading matrix 1
    printf("enter  1st array elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          scanf("%d",&arr1[i][j]);  
        }
        
    }
    //reading matrix 2;
   
    int arr2[m][n];
    printf("enter 2nd  array elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          scanf("%d",&arr2[i][j]);  
        }
        
    }
    int arr3[m][n];

    for(i=0;i<m;i++){
        
        for(j=0;j<n;j++){
        arr3[i][j]=0;
        for(k=0;k<n;k++){
        
         arr3[i][j] += arr1[i][k]*arr2[k][j];
        }
        }
        
    }

    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          printf("%d ",arr3[i][j]);  
        }
        printf("\n");
    }
     
   return 0;
}