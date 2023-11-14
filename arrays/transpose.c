#include<stdio.h>
int main(){
    int m, n,i,j;
    printf("enter  m and n:");
    scanf("%d%d",&m,&n);
    int arr1[m][n];
    printf("enter  1st array elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
          scanf("%d",&arr1[i][j]);  
        }
        
    }
    int t=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
             t+=arr1[i][j];   
            }
         
        }
        
    }

   
    printf("%d ",t);  
     
     
   return 0;
}